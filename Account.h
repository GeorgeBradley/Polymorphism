#pragma once
#include <iostream>
#include "I_Printable.h"
class Account : public I_Printable
{
public:
    std::string sAccountName;
    
    Account(std::string sAccountName) :sAccountName(sAccountName) {}
    Account() :sAccountName("Base Account") {}

    virtual void Withdraw(double dMoney) 
    {
        std::cout << "Account: Withdraw" << std::endl; 
    }
    virtual void display(std::ostream& os) const override
    {
        os << sAccountName << std::endl;
    }
    
    virtual ~Account() 
    {

    }
};

