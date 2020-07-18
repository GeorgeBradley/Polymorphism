// Dynamic Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Savings.h"
#include "Checking.h"
#include "Trust.h"
#include "Accounts_Utilities.h"
//Simple class hierarchy of different types of bank accounts
//Within each class I have used the "virtual keyword" so the compiler knows at runtime which one to call

int main()
{
    Account *ptrAccount = new Account; 
    Account* ptrSavings = new Savings;
    Account* ptrChecking = new Checking;
    Account* ptrTrust = new Trust;
    std::vector<Account*>vecAccounts;
    vecAccounts.push_back(ptrAccount);
    vecAccounts.push_back(ptrSavings);
    vecAccounts.push_back(ptrChecking);
    vecAccounts.push_back(ptrTrust);
  
  //This is an example of statically bound at runtime.
  /*  ptrAccount->Withdraw(1000);
    ptrSavings->Withdraw(1000);
    ptrChecking->Withdraw(1000);
    ptrTrust->Withdraw(1000);*/
    //This is an example of dynamic binding

    Display_Accounts(vecAccounts);
    delete ptrAccount;
    delete ptrSavings;
    delete ptrChecking;
    delete ptrTrust;

}