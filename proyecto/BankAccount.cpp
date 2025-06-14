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

std::string to_string_with_precision(double a_value,int n) {
    std::ostringstream out;
    out.precision(n);
    out<< std::fixed << a_value;
    return out.str();
}

std::string BankAccount::to_string() const {
    return "Numero de cuenta: " + _account_number + "\n"
    + "Titular de la cuenta: " + _account_holder_name + "\n"
    + "Saldo: " + to_string_with_precision(_balance, 2); 
};

std::ostream& operator<<(std::ostream& os, const BankAccount& account) {
    os << account.to_string();
    return os;
}

