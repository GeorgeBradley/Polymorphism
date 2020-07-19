#include "Account.h"
void Account::display(std::ostream& os) const 
{
    os << sAccountName << std::endl;
}
Account::Account(std::string sAccountName, double dAmount) 
    :sAccountName(sAccountName), dAmount(dAmount)
{

}
Account::Account() :Account("", 0)
{

}
std::string Account::Get_Account_Name() const
{
    return sAccountName;
}
double Account::Get_Amount() const
{
    return dAmount;
}
Account::~Account()
{
    std::cout << "Virtual account destructor called." << std::endl;
}