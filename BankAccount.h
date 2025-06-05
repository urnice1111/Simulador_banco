//--------------------------------------------------
//  Proyecto simulador de Sistema Bancario
//  15 de Junio del 2025
//  Autores:
//      A01754717 Nestor Daniel Huidobro Aguilar
//      A01753803 Emiliano Garcia Ramos 
//---------------------------------------------------

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H



#pragma once

#include <string>
#include <iostream>

// Clase base:BankAccount
class BankAccount {
public:
    virtual void deposit(double amount);
    virtual void withdraw(double amount); //Virtual class to be overrided on dependences
    virtual std::string to_string() const;

    virtual~BankAccount() = default; // virtual destroyer 
private:
    double _balance;
    std::string _account_number;
    std::string _account_holder_name;
};

std::ostream& operator<<(std::ostream& os, const BankAccount& BankAccount);

#endif // BANK_ACCOUNT_H
