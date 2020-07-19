#pragma once
#include "Account.h"
class Checking : public Account
{
public:
    Checking();
    virtual bool Deposit(double dAmount) override;
    virtual bool Withdraw(double dAmount) override;
    virtual void display(std::ostream& os) const override;
    virtual ~Checking();
};

