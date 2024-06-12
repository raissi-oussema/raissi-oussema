// Copyright (C) 2024 PiGod, all rights reserved

#include "../include/OperationHandler.h"

namespace bank
{
    extern std::mutex mtx;
    void handle_operation(Account account, Operation operation)
    {
        std::lock_guard<std::mutex> lock(mtx);

        OperationInfo operation_info = operation.getOperationInfo();
        switch (operation_info.operation_type)
        {
        case (OPERATION_PTYPES::withdrow):
            account.withdraw(operation_info.number, operation_info.date, operation_info.ammount);
            break;
        case (OPERATION_PTYPES::deposit):
            account.deposit(operation_info.number, operation_info.date, operation_info.ammount);
            break;
        case (OPERATION_PTYPES::transfer):
            account.transfer(operation_info.number, operation_info.date, operation_info.ammount, operation_info.transferAccount);
            break;
        default:
            break;
        }
    }
}
