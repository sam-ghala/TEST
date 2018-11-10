//Implementation File for BankAccount class

#include "bankAccount.h"

void bankAccount::deposit(double x) {
	balance += x;
}
void bankAccount::withdrawl(double x) {
	balance -= x;
}
void bankAccount::setup(std::string yourName, std::string acc, double bal) {
	name = yourName;
	accNum = acc;
	balance = bal;
}
void bankAccount::nameChange(std::string y) {

}
void bankAccount::display() {
	std::cout << name << " \n" << accNum << " \n" << balance << " \n\n";
}
bankAccount::bankAccount() {
	name = "Unknown Owner";
	accNum = "00000";
	balance = 0;
}
bankAccount::bankAccount(std::string newName, std::string ID, double bal) {
	name = newName;
	accNum = ID;
	balance = bal;
}
bankAccount::~bankAccount() {
	std::cout << "Leaving bank... \n" << "Goodbye " << name ;
}

bool bankAccount::equalName(bankAccount& account) const {
	if (name == account.name)
		return 1;
	else
		return 0;
}