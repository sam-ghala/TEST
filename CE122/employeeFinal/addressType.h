#pragma once
#include <string>
class addressType {
protected:
	std::string streetAddress;
	std::string city;
	std::string state;
	std::string zip;
public:
	void setStreetAddress(std::string);
	void setCity(std::string);
	void setState(std::string);
	void setZip(std::string);
	addressType(std::string newStreetAddress, std::string newCity, std::string newState, std::string newZip);
	addressType();
};