#include "Accounts_Utilities.h"
void Display_Accounts(std::vector<Account*>& vecObjAccounts) 
{
	for (Account* const &objAccount : vecObjAccounts)
	{
		std::cout << *objAccount;
	}
}