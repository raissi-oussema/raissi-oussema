
#ifndef _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPTYPES_H_
#define _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPTYPES_H
#include "include/IAccount.h"
namespace bank
{
    typedef struct OperationInfo {
        int  number;
        std::string date;
        double ammount;
        int operation_type;
        Account* transferAccount;
    };
    enum OpType
    {
        withdrow,
        insert,
        transfer,
    };
}  // namespace bank
#endif // _HOME_OUSSEMA_DESKTOP_MYWORKINGFOLDER_CPPMANIPULATION_BANCACCOUNTMANAGEMENT_INCLUDE_OPTYPES_H_
