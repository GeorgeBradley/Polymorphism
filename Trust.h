#pragma once
#include "Account.h"
class Trust : public Account
{
public:
    Trust() :Account("Trust Account") {}
    virtual void Withdraw(double dMoney) { std::cout << "Trust: Withdraw" << std::endl; }
    virtual void display(std::ostream& os) const override {
        os << sAccountName << std::endl;
    }
    virtual ~Trust() {

    }
};


