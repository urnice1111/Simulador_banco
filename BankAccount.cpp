//--------------------------------------------------
//  Proyecto simulador de Sistema Bancario
//  15 de Junio del 2025
//  Autores:
//      A01754717 Nestor Daniel Huidobro Aguilar
//      A01753803 Emiliano Garcia Ramos 
//---------------------------------------------------





#include "BankAccount.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdexcept>


BankAccount::(std::string number, std::string name,double balance)
    : _account_number(number),_accountholder_name(name),_balance(balance) {}
void BankAccount::deposit(double amount) {
if (amount < 0) {
      throw std::invalid_argument ("El monto del deposito no puede ser negativo ");
}
_balance+= amount;
}

void BankAccount:: withdraw(double amount) {
if (amount < 0) {
    throw std::invalid_argument("El monto del retiro no puede ser negativo");
}
if (amount > _balance){
    throw std::runtime_error ("Fondos insuficientes en la cuenta bancaria ");
}
_balance -= amount;
}

std::string BankAccount::to_string() const {
    return "Hola";

}

std::ostream& operator<<(std::ostream& os, const BankAccount& BankAccount)
{
    return os << BankAccount.to_string();
}

std::string to_string_with_precision(double a_value,int n) {
    std::ostringstream out;
    out.precision(n);
    out<< std::fixed << a_value;
    return out.str();
}
