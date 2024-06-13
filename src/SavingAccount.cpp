// Copyright (C) 2024 PiGod, all rights reserved
#include "../include/ISavingAccount.h"
namespace bank
{
    SavingAccount::SavingAccount(double code, double balance, double interest) : Account(code, balance), interest(interest){};
    SavingAccount::~SavingAccount(){};
    void SavingAccount::setInterest(double interest) { this->interest = interest; }
    double SavingAccount::getInterset() { return interest; };

} // namespace bank
