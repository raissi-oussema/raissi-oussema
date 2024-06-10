#include "../include/IAccount.h"
#include "../include/IOperation.h"
#include <iostream>

namespace bank{
    bool Account::withdraw(int op_number, std::string date, double ammount) {
        if (ammount > this->balance) {
            std::cout << "Invalid Operation, No suffisant balance" << std::endl;
        }
        else{
            Operation operation = {op_number, date, ammount, OpType::withdrow, nullptr};
            // OperationInfo Operation_info = operation.getOperationInfo();
            this->affected_oprations.push_back(operation);

            this->balance -= ammount;
            std::cout << "Withdrow complete succeffully" << std::endl;
        }
       
    }
    bool insert(int op_number, std::string date, double ammount) {

    }
}