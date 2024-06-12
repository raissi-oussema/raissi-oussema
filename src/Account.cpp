// Copyright (C) 2024 PiGod, all rights reserved

#include "../include/IAccount.h"
#include "../include/IOperation.h"
#include <iostream>

namespace bank
{
    bool Account::withdraw(int op_number, std::string date, double ammount)
    {
        if (ammount > this->balance)
        {
            std::cout << "Invalid Operation, No suffisant balance" << std::endl;
            return false;
        }
        else
        {
            Operation operation = {op_number, date, ammount, OPERATION_PTYPES::withdrow, nullptr};
            this->affected_oprations.push_back(operation);

            this->balance -= ammount;
            std::cout << "Withdrow complete succeffully" << std::endl;
            return true;
        }
    }
    bool Account::deposit(int op_number, std::string date, double ammount)
    {
        Operation operation = {op_number, date, ammount, OPERATION_PTYPES::deposit, nullptr};
        this->affected_oprations.push_back(operation);

        this->balance += ammount;
        std::cout << "You add " << ammount << "to your balance successfully " << std::endl;
        return true;
    }
    bool Account::transfer(int op_number, std::string date, double ammount, Account *account)
    {
        if (ammount > this->balance)
        {
            std::cout << "Invalid Operation, No suffisant balance" << std::endl;
            return false;
        }
        else
        {
            Operation operation = {op_number, date, ammount, OPERATION_PTYPES::transfer, account};
            this->affected_oprations.push_back(operation);

            this->balance -= ammount;
            account->deposit(op_number, date, ammount);

            std::cout << "You add " << ammount << "to your balance successfully " << std::endl;
            return true;
        }
    }
    void Account::displayOperations()
    {
        if (this->affected_oprations.empty())
        {
            std::cout << "No affected opertion for this account !!";
        }
        else
        {
            for (Operation op : this->affected_oprations)
            {
                OperationInfo op_info = op.getOperationInfo();
                std::cout << "Operation number:: " << op_info.number << std::endl;
                std::cout << "Operation date:: " << op_info.date << std::endl;
                std::cout << "Operation ammount:: " << op_info.ammount << std::endl;
                std::cout << "Operation operation_type:: " << op_info.operation_type << std::endl;
                if (op_info.operation_type == OPERATION_PTYPES::transfer){
                    std::cout << "Operation transfer Account:: " << op_info.transferAccount << std::endl;
                }
                std::cout << "-------------------------" << std::endl;
            }
        }
    }

}