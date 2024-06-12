// Copyright (C) 2024 PiGod, all rights reserved
#ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_ICURRENTACCOUNT_H_
#define _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_ICURRENTACCOUNT_H_

#include "../include/IAccount.h"
namespace bank
{
    class CurrentAccount: public Account
    {
    private:
        int minimum_required_balance;
    public:
        CurrentAccount(/* args */);
        ~CurrentAccount();
        bool setMinimumRequiredBalance();
        bool getMinimumRequiredBalance();
        void displayOperations();
    };
    
} // namespace bank
#endif  // #ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_ICURRENTACCOUNT_H_
