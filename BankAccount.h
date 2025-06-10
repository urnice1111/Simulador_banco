//--------------------------------------------------
//  Proyecto simulador de Sistema Bancario
//  15 de Junio del 2025
//  Autores:
//      A01754717 Nestor Daniel Huidobro Aguilar
//      A01753803 Emiliano Garcia Ramos 
//---------------------------------------------------

#pragma once

#include <string>
#include <iostream>

// Clase base:BankAccount
class BankAccount {
public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0; //Virtual class to be overrided on dependences
    std::string to_string() const;
    friend std::ostream& operator<<(std::ostream& os, const BankAccount& account);

    BankAccount(double balance, std::string account_number, std::string account_holder) : 
        _balance(balance), _account_number(account_number), _account_holder_name(account_holder){} 

    //virtual~BankAccount() = default; // virtual destroyer 
protected:
    double _balance;
    std::string _account_number;
    std::string _account_holder_name;
};


