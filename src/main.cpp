// Copyright (C) 2024 PiGod, all rights reserved

/*#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <future>

class BankAccount {
private:
    int balance;
    std::mutex mtx;

public:
    BankAccount(int initialBalance) : balance(initialBalance) {}

    void deposit(int amount) {
        std::lock_guard<std::mutex> lock(mtx);
        balance += amount;
        std::cout << "Deposited: " << amount << std::endl;
    }

    bool withdraw(int amount) {
        std::lock_guard<std::mutex> lock(mtx);
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn: " << amount << std::endl;
            return true;
        }
        std::cout << "Insufficient funds!" << std::endl;
        return false;
    }

    int getBalance() const {
        return balance;
    }
};

void transaction(BankAccount& account, int amount, bool isDeposit) {
    if (isDeposit) {
        account.deposit(amount);
    } else {
        account.withdraw(amount);
    }
}

int main() {
    BankAccount account(1000);

    // Asynchronous transactions
    std::vector<std::future<void>> futures;
    for (int i = 0; i < 5; ++i) {
        futures.push_back(std::async(std::launch::async, transaction, std::ref(account), 200, i % 2 == 0));
    }

    // Wait for all transactions to complete
    for (auto& future : futures) {
        future.wait();
    }

    std::cout << "Final balance: " << account.getBalance() << std::endl;

    return 0;
}
*/
#include "../include/ISavingAccount.h"
int main(){
    bank::SavingAccount account {100.0, 200.0, 5};
    account.deposit(1, "20/12/2024",100.0);
    account.displayOperations();
    account.withdraw(2, "20/12/2024", 2);
    account.displayOperations();
    return 0;
}