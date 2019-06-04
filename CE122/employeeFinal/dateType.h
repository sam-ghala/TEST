#pragma once
#include <string>
class dateType {
protected:
	std::string month;
	std::string day;
	std::string year;
public:
	void setMonth(std::string);
	void setday(std::string);
	void setYear(std::string);
	dateType(std::string newDay, std::string newMonth, std::string newYear);
};