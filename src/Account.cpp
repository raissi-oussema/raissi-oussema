#include "../include/IAccount.h"
#include "../include/IOperation.h"
#include <iostream>

namespace bank{
    bool Account::withdraw(int op_number, std::string date, double ammount) {
        if (ammount > this->balance) {
            std::cout << "Invalid Operation, No suffisant balance" << std::endl;
            return false;
        }
        else{
            Operation operation = {op_number, date, ammount, OpType::withdrow, nullptr};
            this->affected_oprations.push_back(operation);

            this->balance -= ammount;
            std::cout << "Withdrow complete succeffully" << std::endl;
            return true;
        }
       
    }
    bool Account::insert(int op_number, std::string date, double ammount) {
        Operation operation = {op_number, date, ammount, OpType::insert, nullptr};
        this->affected_oprations.push_back(operation);

        this->balance += ammount;
        std::cout << "You add " << ammount << "to your balance successfully " << std::endl;
        return true;
    }
    bool Account::transfer(Account *account, int op_number, std::string date, double ammount) {
        if (ammount > this->balance) {
            std::cout << "Invalid Operation, No suffisant balance" << std::endl;
            return false;
        }
        else {
        Operation operation = {op_number, date, ammount, OpType::transfer, account};
        this->affected_oprations.push_back(operation);

        this->balance -= ammount;
        account->insert(op_number, date, ammount);

        std::cout << "You add " << ammount << "to your balance successfully " << std::endl;
        return true;
        }
    }
    
}