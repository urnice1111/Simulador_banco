//--------------------------------------------------
//  Proyecto simulador de Sistema Bancario
//  15 de Junio del 2025
//  Autores:
//      A01754717 Nestor Daniel Huidobro Aguilar
//      A01753803 Emiliano Garcia Ramos 
//---------------------------------------------------


#pragma once
#include "BankAccount.h"
#include <iostream>

// clase derivada :chekingAccount
class CheckingAccount : public BankAccount {
public:
   // Limite de sobregiro
double _overdraft_limit;

explicit checkingAccount(
const std::string& account_holder_name,
const std::string& account_number,
double overdraft_limit)
:BankAccount(balance, account_number,account_holder_name), _overdraft_limit(overdraft_limit){}

void deposit(double amount) override;

void withdraw(double amount) override;
};
