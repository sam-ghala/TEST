#include "contactInfoType.h"

void contactInfoType::setHomePhone(std::string newHomePhone) {
	homePhone = newHomePhone;
}
void contactInfoType::setcellPhone(std::string newCellPhone) {
	cellPhone = newCellPhone;
}
void contactInfoType::setEmail(std::string newEmail) {
	email = newEmail;
}
contactInfoType::contactInfoType(std::string newHomePhone, std::string newCellPhone, std::string newEmail) {
	homePhone = newHomePhone;
	cellPhone = newCellPhone;
	email = newEmail;
}
contactInfoType::contactInfoType() {
	homePhone = "N/A";
	cellPhone = "N/A";
	email = "N/A";
}