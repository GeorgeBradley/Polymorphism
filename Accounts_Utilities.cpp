#include "Accounts_Utilities.h"
void Display_Accounts(std::vector<Account*>& vecObjAccounts) 
{
	for (Account* const &objAccount : vecObjAccounts)
	{
		std::cout << *objAccount;
	}
}
void Deposit(std::vector<Account*>& vecObjAccounts) 
{
	std::string sWithdraw;
	double dDeposit = 0;

	for (Account*& objAccount : vecObjAccounts)
	{
		std::cout << "Deposit for " << *objAccount;
		Message_And_Input("How much would you like to deposit?: ", &dDeposit);
		objAccount->Deposit(dDeposit);
	}

}
void Withdraw(std::vector<Account*>& vecObjAccounts) {
	double dWithdraw = 0;
	for (Account*& objAccount : vecObjAccounts)
	{
		Message_And_Input("How much would you like to deposit?: ", &dWithdraw);
		objAccount->Withdraw(dWithdraw);
	}
}