#include "Checking.h"
Checking::Checking() :Account("Checking Account", 0) 
{

}

bool Checking::Deposit(double dAmount) 
{
    return true;
}
bool Checking::Withdraw(double dAmount) 
{
    std::cout << "Checking: Withdraw" << std::endl;
    return true;
}
void Checking::display(std::ostream& os) const  {
    os << Get_Account_Name() << std::endl;
}
Checking::~Checking()
{
    std::cout << "Virtual destuctor called" << std::endl;
}