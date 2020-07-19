#include "Savings.h"
Savings::Savings() :Account("Savings Account", 0)
{

}
bool Savings::Deposit(double dAmount) {
    return true;
}
bool Savings::Withdraw(double dAmount)
{
    std::cout << "Savings: Withdraw" << std::endl;
    return true;
}

void Savings::display(std::ostream& os) const 
{
    os << Get_Account_Name() << std::endl;
}

Savings::~Savings() 
{

}