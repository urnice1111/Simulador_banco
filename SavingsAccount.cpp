#include "SavingsAccount.h"
#include <stdexcept>


void SavingsAccount::deposit(double amount) {

    _balance += amount + amount * _interest_rate;
}

void SavingsAccount::withdraw(double amount) {
    if (amount > _balance) {
        throw std::runtime_error("Fondos insuficientes para el retiro.");
    }
    _balance -= amount;
}
