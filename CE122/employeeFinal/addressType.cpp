#include "addressType.h"

void addressType::setStreetAddress(std::string newStreetAddress) {
	streetAddress = newStreetAddress;
}
void addressType::setCity(std::string newCity) {
	city = newCity;
}
void addressType::setState(std::string newState) {
	state = newState;
}
void addressType::setZip(std::string newZip) {
	zip = newZip;
}
addressType::addressType(std::string newStreetAddress, std::string newCity, std::string newState, std::string newZip) {
	streetAddress = newStreetAddress;
	city = newCity;
	state = newState;
	zip = newZip;
}
addressType::addressType() {
	streetAddress = "N/A";
	city = "N/A";
	state = "N/A";
	zip = "N/A";
}