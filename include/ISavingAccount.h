// Copyright (C) 2024 PiGod, all rights reserved
#ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_ISAVINGACCOUNT_H_
#define _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_ISAVINGACCOUNT_H
#include "../include/IAccount.h"
namespace bank
{
    class SavingAccount: public Account
    {
    private:
        double interest;
    public:
        SavingAccount(double code, double balance, double interest);
        ~SavingAccount();
        void setInterest(double interest);
        double getInterset();
    };
    
} // namespace bank
#endif  // _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_ISAVINGACCOUNT_H_