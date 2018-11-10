
// header file

#ifndef bankAccount_H_
#define bankAccount_H_

#include <iostream>
#include <string>
class bankAccount {
	std::string name;
	std::string accNum;
	double balance;
public:
	void deposit(double);
	void withdrawl(double);
	void setup(std::string, std::string, double);
	void nameChange(std::string);
	void display();
	bankAccount(); // constructor
	bankAccount(std::string, std::string, double);
	~bankAccount();
	bool equalName(bankAccount& account) const;
};
#endif