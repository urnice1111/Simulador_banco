//--------------------------------------------------
//  Proyecto simulador de Sistema Bancario
//  15 de Junio del 2025
//  Autores:
//      A01754717 Nestor Daniel Huidobro Aguilar
//      A01753803 Emiliano Garcia Ramos 
//---------------------------------------------------

#include "BankAccount.h"
#include <iostream>
#pragma once

class SavingsAccount: public BankAccount{


    public:


    SavingsAccount(
                   std::string account_holder_name,
                   std::string account_number,
                   double balance,
                   double interest_rate)
    : BankAccount(balance, account_number, account_holder_name),  // inicializa la base
      _interest_rate(interest_rate) {}      //constructor

    void deposit(double amount) override;
    void withdraw(double amount) override;

    private:
    double _interest_rate;

};



