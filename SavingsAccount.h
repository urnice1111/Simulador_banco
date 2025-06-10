#include "BankAccount.h"
#include <iostream>
#pragma once

class SavingsAccount: public BankAccount{


    public:
    double _interest_rate;

    SavingsAccount(
                   std::string account_holder_name,
                   std::string account_number,
                   double balance,
                   double interest_rate)
    : BankAccount(balance, account_number, account_holder_name),  // inicializa la base
      _interest_rate(interest_rate) {}      //constructor

    void deposit(double amount) override;
    void withdraw(double amount) override;

};



