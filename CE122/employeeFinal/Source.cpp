//
// Sam Ghalayni
// VS_12_Employee Classssseseseseseesees
//
#include <iostream>
#include <fstream>
#include <string>
//#include "employeeType.h"

int main() {
	std::string fName, lName, mName, line;
	std::ifstream read("employeeinfo.txt");
	//employeeType employee;
	std::getline(read, line);
	//fName = line.substr(0,3);
	std::cout << line;
	//lName = line.substr(20, 5);
	//mName = line.substr(26, 5);
	//employee.nameType::setFirstName(fName);
	//employee.nameType::display();

	read.close();
	return 0;
}
