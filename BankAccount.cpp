#include "BankAccount.h"
#include <iostream>



std::string BankAccount::to_string() const {
    return "Hola";

}

std::ostream& operator<<(std::ostream& os, const BankAccount& BankAccount)
{
    return os << BankAccount.to_string();
}
