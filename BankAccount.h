#pragma once

#include <string>


class BankAccount {
public:
    virtual void deposit(double amount);
    virtual void withdraw(double amount);
    std::string to_string();
    
private:
    double _balance;
    std::string _account_number;
    std::string _account_holder_name;
};