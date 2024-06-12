// Copyright (C) 2024 PiGod, all rights reserved
#include "../include/IAccount.h"
namespace bank
{
    class SavingAccount: public Account
    {
    private:
        int interest;
    public:
        SavingAccount(/* args */);
        ~SavingAccount();
        bool setInterest();
        bool getInterset();
        void displayOperations();
    };
    
} // namespace bank
