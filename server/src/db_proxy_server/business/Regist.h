/*================================================================
 *   Copyright (C) 2014 All rights reserved.
 *
 *   REGIST_H_.h
 *   创 建 者：Harry
 *   邮    箱：miniwing.hz@gmail.com
 *   创建日期：2020年09月02日
 *   描    述：
 *
 ================================================================*/

#ifndef REGIST_H_
#define REGIST_H_

#include "ImPduBase.h"

#include "TTIMConfig.h"
#include "TTIMLog.h"

namespace DB_PROXY {

void doRegist(CImPdu* pPdu, uint32_t conn_uuid);

};


#endif /* LOGIN_H_ */
