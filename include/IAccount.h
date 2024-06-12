// Copyright (C) 2024 PiGod, all rights reserved

/**
 * Pure abstract Account class
 */

#ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_IACCOUNT_H_
#define _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_IACCOUNT_H_
#include <string>
#include <vector>
#include "../include/IOperation.h"


namespace bank
{
    class Account
    {
    protected:
        Account(double code, double balance);

    private:
        double code;
        double balance;
        std::vector<bank::Operation> affected_oprations;

    public:
        virtual ~Account();
        virtual bool withdraw (int op_number, std::string date, double ammount) ;
        virtual bool deposit  (int op_number, std::string date, double ammount) ;
        virtual bool transfer (int op_number, std::string date, double ammount, Account* transferAccount);
        virtual void displayOperations();
    };
} // namespace bank

#endif // _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_IACCOUNT_H_