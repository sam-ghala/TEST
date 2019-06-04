#pragma once
#include <string>
#include <iostream>
class nameType {
protected:
	std::string firstName;
	std::string lastName;
	std::string middleI;
public:
	void setFirstName(std::string);
	void setLastName(std::string);
	void setMiddleI(std::string);
	void display();
	nameType(std::string newFirst, std::string newLast, std::string newMiddle);
	nameType();
};