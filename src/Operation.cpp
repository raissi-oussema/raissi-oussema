// Copyright (C) 2024 PiGod, all rights reserved

#include "../include/IOperation.h"

namespace bank
{
    Operation::Operation(int number, std::string date, double ammount, int operation_type, Account *transferAccount)
    {
        operation_info.number = number;
        operation_info.date = date;
        operation_info.ammount = ammount;
        operation_info.operation_type = operation_type;
        operation_info.transferAccount = nullptr;
    }
    OperationInfo Operation::getOperationInfo()
    {
        return operation_info;
    }
}