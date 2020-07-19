#pragma once
#include <iostream>
#include "I_Printable.h"
class Account : public I_Printable
{
private:
    std::string sAccountName;
    double dAmount;
public:
    
    Account(std::string sAccountName, double dAmount);
    Account();
    virtual std::string Get_Account_Name() const;
    virtual double Get_Amount() const;
    virtual bool Withdraw(double dAmount)  = 0;
    virtual bool Deposit(double dDeposit) = 0;
    virtual void display(std::ostream& os) const override = 0;
    virtual ~Account();
};

