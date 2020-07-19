#pragma once
#include "Account.h"
class Savings : public Account
{
public:
    Savings();

    virtual bool Deposit(double dAmount)override;
    virtual bool Withdraw(double dAmount) override;
    virtual void display(std::ostream& os) const override;
    virtual ~Savings();
};