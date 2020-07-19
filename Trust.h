#pragma once
#include "Account.h"
class Trust : public Account
{
public:
    Trust();
    
    virtual bool Deposit(double dAmount)override;
    virtual bool Withdraw(double dAmount);
    virtual void display(std::ostream& os) const override;
    virtual ~Trust();
};


