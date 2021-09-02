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

namespace DB_PROXY {

void doRegist(CImPdu* pPdu, uint32_t conn_uuid) {
    
    TTIM_PRINTF(("DB_PROXY::doRegist : %d", conn_uuid));

    IM::Login::IMRegistReq msg;
    IM::Login::IMRegistRes msgResp;

    if (msg.ParseFromArray(pPdu->GetBodyData(), pPdu->GetBodyLength())) {

        CImPdu  *pPduRes    = new CImPdu;
        
        bool     nRet       = CUserModel::getInstance()->getUser(msg.user_name());
        
        pPduRes->SetPBMsg(&msgResp);
        pPduRes->SetSeqNum(pPdu->GetSeqNum());
        pPduRes->SetServiceId(IM::BaseDefine::SID_LOGIN);
        pPduRes->SetCommandId(IM::BaseDefine::CID_LOGIN_RES_REGIST);
        CProxyConn::AddResponsePdu(conn_uuid, pPduRes);
    }
    else
    {
        log("parse pb failed");
    }

    return;
}

};

