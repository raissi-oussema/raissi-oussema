// Copyright (C) 2024 PiGod, all rights reserved

#ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_HANDLER_H_
#define _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_HANDLER_H
#include <mutex>
#include "../include/IOperation.h"
#include "../include/IAccount.h"
#include "../include/OPERATION_PTYPE.h"

namespace bank{
    std::mutex mtx;
    void handle_operation(Account account, Operation operation);
}

#endif //  _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_HANDLER_H_