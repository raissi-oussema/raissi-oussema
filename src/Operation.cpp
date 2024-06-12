// Copyright (C) 2024 PiGod, all rights reserved

#include "include/IOperation.h"

namespace bank
{
    Operation::Operation(int number, std::string date, double ammount, int operation_type, Account *transferAccount)
    {
        this->number = number;
        this->date = date;
        this->ammount = ammount;
        this->operation_type = operation_type;
        this->transferAccount = nullptr;
    }
    OperationInfo Operation::getOperationInfo()
    {
        return OperationInfo{
            this->number, this->date, this->ammount, this->operation_type, this->transferAccount};
    }
}