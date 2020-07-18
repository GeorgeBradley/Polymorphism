#pragma once
#include "Account.h"
class Savings : public Account
{
public:
    Savings() :Account("Savings Account") 
    {
    }

    virtual void Withdraw(double dMoney) 
    { 
        std::cout << "Savings: Withdraw" << std::endl; 
    }

    virtual void display(std::ostream& os) const override 
    {
        os << sAccountName << std::endl;
    }
    virtual ~Savings() {

    }
};