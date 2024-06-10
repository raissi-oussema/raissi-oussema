// Copyright (C) 2024 PiGod, all rights reserved
#ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_HANDLER_H_
#define _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_HANDLER_H
#include <mutex>
#include "../include/IOperation.h"
#include "../include/IAccount.h"
#include "../include/OPTypes.h"

namespace bank{
    std::mutex mtx;
    void handle_operation(Account account, Operation operation) {
        std::lock_guard <std::mutex> lock(mtx);
        
        OperationInfo operation_info = operation.getOperationInfo();
        switch (operation_info.operation_type)
        {
        case (OpType::withdrow):
            account.withdraw(operation_info.number, operation_info.date, operation_info.ammount);
            break;
        case (OpType::insert):
            account.insert(operation_info.number, operation_info.date, operation_info.ammount);
            break;
        case (OpType::transfer):
            account.transfer(operation_info.transferAccount, operation_info.date, operation_info.ammount);
            break;
        default:
            break;
        }
    }
}

#endif //  _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPERATION_HANDLER_H_