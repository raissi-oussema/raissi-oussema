
// Copyright (C) 2024 PiGod, all rights reserved

#ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_PTYPES_H_
#define _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_PTYPES_H
#include "../include/IAccount.h"
namespace bank
{
    typedef struct OperationInfo {
        int  number;
        std::string date;
        double ammount;
        int operation_type;
        Account* transferAccount;
    };
    enum OPERATION_PTYPES
    {
        withdrow,
        deposit,
        transfer,
    };
}  // namespace bank
#endif // _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_PTYPES_H_
