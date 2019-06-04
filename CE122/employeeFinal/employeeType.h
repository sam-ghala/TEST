#pragma once
#include "personType.h"
#include "dateType.h"
class employeeType : public personType{
	double salary;
	std::string startDate;
	std::string endDate;
	int vacDays;
public:
	void setSalary(double);
	void setStartDate(std::string);
	void setEnddate(std::string);
	void setVacDays(int);
	employeeType();
};