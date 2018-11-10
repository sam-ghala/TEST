#include <iostream>
#include <string>
#include <fstream> // read write file

int main(){
	
	std::ifstream read; // read declaration
	std::ofstream write; // write declaration

	read.open("telemetry_raw.txt"); // open file to rea from
	write.open("PURG.txt"); // open file to write to

	std::string line, time, rawVolt, rawTemp; // string declarations
	double volt, temp, new_volt, max_temp; 
	new_volt = 0; // volt and temp double

	getline(read,line); // get first line

	while(!read.eof()) // read until end of file
	{
		std::size_t found = line.find("#"); // make statement for if statemt to read the substr only if it contains a hastag
		if(found != std::string::npos)
		{
			time = line.substr(0,18); // have time string be from 0 to the 18th charcater from the data 
			rawTemp = line.substr(65,3);
			rawVolt = line.substr(69,3);


			volt = std::stod(rawVolt); // convert string to double
			temp = std::stod(rawTemp);
			temp = (temp * 3.529) - 443.02; // convert raw to actual temp
			volt = volt * 0.072;
			new_volt = volt; // convert raw to acual voltage
			write << time << ", " << temp << ", " << volt << std::endl; // write data
		}
		if(volt > new_volt)
		{
			max_temp = temp;
		}
		getline(read,line); // read another line
	}
	std::cout << "Temperature at max volatge was " << temp << " degrees F." << std::endl;

	read.close(); // close the file used to read
	write.close(); // close the file used to write to
	return 0; // end program
}