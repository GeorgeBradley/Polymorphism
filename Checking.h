#pragma once
#include "Account.h"
class Checking : public Account
{
public:
    Checking() :Account("Checking Account") {}
    virtual void Withdraw(double dMoney) { std::cout << "Checking: Withdraw" << std::endl; }
    virtual void display(std::ostream& os) const override {
        os << sAccountName << std::endl;
    }
    virtual ~Checking()
    {
        std::cout << "Virtual destuctor called" << std::endl;
    }
};

