//--------------------------------------------------
//  Proyecto simulador de Sistema Bancario
//  15 de Junio del 2025
//  Autores:
//      A01754717 Nestor Daniel Huidobro Aguilar
//      A01753803 Emiliano Garcia Ramos 
//---------------------------------------------------

#include "CheckingAccount.h"
#include <stdexcept>

// void CheckingAccount::deposit(double amount){
//   if (amount <= 0) {
//     throw std::invalid_argument("El monto del deposito debe de ser mayor que cero");
//   }
//   //Depositar el monto
//   _balance += amount;
// }


void CheckingAccount::deposit(double amount) {
    if (amount <= 0){
        throw std::runtime_error("El monto del depósito no puede ser negativo");
    }
    _balance += amount;
}


void CheckingAccount::withdraw(double amount){
  if (amount <=0){
throw std::invalid_argument("El monto del retiro no puede ser negativo");
  }
if (amount > _balance + _overdraft_limit){

throw std::logic_error("Se superó el limite de sobregiro");
}
_balance -= amount;
}
