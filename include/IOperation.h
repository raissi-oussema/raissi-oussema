// Copyright (C) 2024 PiGod, all rights reserved
#ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_IOPERATION_H_
#define _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_IOPERATION_H_
#include <string>
#include <unordered_map>
#include "include/OPERATION_PTYPE.h"

/**
 * Operation could be a withdrow /deposit /tarnsfer
 */
namespace bank
{
    class Operation
    {
    private:
        int number;
        std::string date;
        double ammount;
        int operation_type;
        Account *transferAccount;

    public:
        Operation(int number, std::string date, double ammount, int operation_type, Account *transferAccount);
        OperationInfo getOperationInfo();
    };
} // namespace bank
#endif //  _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_IOPERATION_H_
