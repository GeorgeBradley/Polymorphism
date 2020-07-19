#include "Trust.h"

Trust::Trust() :Account("Trust Account", 0)
{

}
bool Trust::Deposit(double dAmount) {
    return true;
}

 
bool Trust::Withdraw(double dAmount)
{
    std::cout << "Trust: Withdraw" << std::endl;
    return true;
}

void Trust::display(std::ostream& os) const
{
    os << Get_Account_Name() << std::endl;
}
 
Trust::~Trust()
{
    std::cout << "Virtual Trust destructor called\n";
}