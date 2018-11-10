//
// Class example with user-defied header file
//
//

#include <iostream>
#include <string>
#include "bankAccount.h"

void displayAccounts(bankAccount customers[], int len);

int main() {
	bankAccount customer[3] { { "Joe", "00", 500 }, { "Katie", "01", 300 }, { "Jared", "10", 650 } };

	customer[0].withdrawl(100);
	customer[2].deposit(50);
	if (customer[0].equalName(customer[1]))
		std::cout << "The two accounts have the same name!\n";
	else
		std::cout << "The two accounts have different name's.\n";
	displayAccounts(customer, 3);
	return 0;
}

void displayAccounts(bankAccount customers[], int len)
{
	for(int i=0; i < len; i++)
		customers[i].display();
}
