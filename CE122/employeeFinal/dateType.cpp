#include "dateType.h"

void dateType::setMonth(std::string newMonth) {
	month = newMonth;
}
void dateType::setday(std::string newDay) {
	day = newDay;
}
void dateType::setYear(std::string newYear) {
	year = newYear;
}
dateType::dateType(std::string newDay, std::string newMonth, std::string newYear) {
	day = newDay;
	month = newMonth;
	year = newYear;
}