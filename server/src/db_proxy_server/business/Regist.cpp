/*================================================================
 *   Copyright (C) 2014 All rights reserved.
 *
 *   文件名称：Login.cpp
 *   创 建 者：Zhang Yuanhao
 *   邮    箱：bluefoxah@gmail.com
 *   创建日期：2014年12月15日
 *   描    述：
 *
 ================================================================*/

#include <list>
#include "../ProxyConn.h"
#include "../HttpClient.h"
#include "../SyncCenter.h"

#include "Regist.h"
#include "UserModel.h"
#include "TokenValidator.h"
#include "json/json.h"
#include "Common.h"
#include "Base64.h"

#include "UserModel.h"

#include "IM.BaseDefine.pb.h"
#include "IM.Login.pb.h"
#include "IM.Regist.pb.h"
#include "IM.Server.pb.h"

namespace DB_PROXY
{
    void doRegist(CImPdu *pPdu, uint32_t conn_uuid)
    {
        TTIM_PRINTF(("DB_PROXY::doRegist : %d\n", conn_uuid));

        CImPdu                  *pPDURes    = new CImPdu;

        IM::Login::IMRegistReq   cRegistReq;
        IM::Login::IMRegistRes   cRegistRes;

        if (cRegistReq.ParseFromArray(pPdu->GetBodyData(), pPdu->GetBodyLength()))
        {
            TTIM_PRINTF(("DB_PROXY::doRegist : user_name : %s\n", cRegistReq.user_name().c_str()));
            TTIM_PRINTF(("DB_PROXY::doRegist : password  : %s\n", cRegistReq.password().c_str()));

            bool bRet   = CUserModel::getInstance()->getUser(cRegistReq.user_name());

            cRegistRes.set_user_name(cRegistReq.user_name());
            cRegistRes.set_server_time(time(NULL));
            cRegistRes.set_attach_data(cRegistReq.attach_data());

            if (bRet)
            {
                TTIM_PRINTF(("DB_PROXY::doRegist : 用户名已经存在\n"));

                cRegistRes.set_result_code(IM::Login::RegistResult::REGIST_RESULT_ERROR_ALREADY_EXIST);
                cRegistRes.set_result_string("用户名已经存在");

            } /* End if () */
            else
            {
                TTIM_PRINTF(("DB_PROXY::doRegist : 注册用户名 : %s\n", cRegistReq.user_name().c_str()));

                bRet = CUserModel::getInstance()->insertUser(cRegistReq.user_name(), cRegistReq.password());
                TTIM_PRINTF(("DB_PROXY::doRegist : insertUser : %d\n", bRet));

                if (bRet)
                {
                    cRegistRes.set_result_code(IM::Login::RegistResult::REGIST_RESULT_NO_ERROR);
                    cRegistRes.set_result_string("注册成功");
                }
                else
                {
                    cRegistRes.set_result_code(IM::Login::RegistResult::REGIST_RESULT_ERROR_DB_VALIDATE_FAILED);
                    cRegistRes.set_result_string("服务端内部错误");

                } /* End else */

            } /* End else */

        } /* End if () */
        else
        {
            log("parse pb failed");
            TTIM_PRINTF(("parse pb failed \n"));

            cRegistRes.set_user_name("");
            cRegistRes.set_result_code(IM::Login::RegistResult::REGIST_RESULT_ERROR_GENERIC);
            cRegistRes.set_result_string("服务端内部错误");

        } /* End else */

        pPDURes->SetPBMsg(&cRegistRes);
        pPDURes->SetSeqNum(pPdu->GetSeqNum());
        pPDURes->SetServiceId(IM::BaseDefine::SID_LOGIN);
        pPDURes->SetCommandId(IM::BaseDefine::CID_LOGIN_RES_REGIST);
        CProxyConn::AddResponsePdu(conn_uuid, pPDURes);

        return;
    }

};
