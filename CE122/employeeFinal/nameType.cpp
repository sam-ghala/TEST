#include "nameType.h"

void nameType::setFirstName(std::string newFirstName) {
	firstName = newFirstName;
}
void nameType::setLastName(std::string newlastName) {
	lastName = newlastName;
}
void nameType::setMiddleI(std::string newMiddleI) {
	middleI = newMiddleI;
}
nameType::nameType(std::string newFirst, std::string newLast, std::string newMiddle) {
	firstName = newFirst;
	middleI = newMiddle;
	lastName = newLast;
}
void nameType::display() {
	std::cout << firstName << " " << lastName << " " << middleI << std::endl;
}
nameType::nameType() {
	firstName = "N/A";
	lastName = "N/A";
	middleI = "N/A";
}