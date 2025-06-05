#pragma once

#include <string>



class BankAccount {
public:
    virtual void deposit(double amount);
    virtual void withdraw(double amount); //Virtual class to be overrided on dependences
    virtual std::string to_string() const;

private:
    double _balance;
    std::string _account_number;
    std::string _account_holder_name;
};

std::ostream& operator<<(std::ostream& os, const BankAccount& BankAccount);