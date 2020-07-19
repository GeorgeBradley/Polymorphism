#pragma once
#include <iostream>
#include <vector>
#include "Account.h"
#include "Error_Checking_Functions.h"
//For loop to test virtual overloaded insertion operator << 
void Display_Accounts(std::vector<Account*>& vecObjAccounts);
void Deposit(std::vector<Account*>&vecObjAccounts);
void Withdraw(std::vector<Account*>&vecObjAccounts);


