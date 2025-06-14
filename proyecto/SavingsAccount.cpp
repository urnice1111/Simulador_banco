//--------------------------------------------------
//  Proyecto simulador de Sistema Bancario
//  15 de Junio del 2025
//  Autores:
//      A01754717 Nestor Daniel Huidobro Aguilar
//      A01753803 Emiliano Garcia Ramos 
//---------------------------------------------------

#include "SavingsAccount.h"
#include <stdexcept>


void SavingsAccount::deposit(double amount) {
    if (amount <= 0){
        throw std::runtime_error("El monto del depósito no puede ser negativo");
    }
    _balance += amount;

    _balance += _balance * ( _interest_rate / 100.0);
}

void SavingsAccount::withdraw(double amount) {
    if (amount > _balance) {
        throw std::runtime_error("Fondos insuficientes en la cuenta de ahorros");
    }
    _balance -= amount;
}
