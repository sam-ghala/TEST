#pragma once
#include <string>
class contactInfoType {
protected:
	std::string homePhone;
	std::string cellPhone;
	std::string email;
public:
	void setHomePhone(std::string);
	void setcellPhone(std::string);
	void setEmail(std::string);
	contactInfoType(std::string newHomePhone, std::string newCellPhone, std::string newEmail);
	contactInfoType();
};