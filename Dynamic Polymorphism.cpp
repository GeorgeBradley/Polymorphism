// Dynamic Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//Simple class hierarchy of different types of bank accounts
//Within each class I have used the "virtual keyword" so the compiler knows at runtime which one to call
class Account {
public:
    
    virtual void Withdraw(double dMoney) { std::cout << "Account: Withdraw" << std::endl; }
};

class Savings : public Account 
{
public:
    virtual void Withdraw(double dMoney) { std::cout << "Savings: Withdraw" << std::endl; }
};

class Checking : public Account 
{
public:
    virtual void Withdraw(double dMoney) { std::cout << "Checking: Withdraw" << std::endl; }
};

class Trust : public Account 
{
public:
    virtual void Withdraw(double dMoney) { std::cout << "Trust: Withdraw" << std::endl; }
};

int main()
{
    Account *ptrAccount = new Account;
    Account* ptrSavings = new Savings;
    Account* ptrChecking = new Checking;
    Account* ptrTrust = new Trust;

    //This is an example of statically bound at runtime.
    ptrAccount->Withdraw(1000);
    ptrSavings->Withdraw(1000);
    ptrChecking->Withdraw(1000);
    ptrTrust->Withdraw(1000);

    //This is an example of dynamic binding


}