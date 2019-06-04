// my first csci2270 program in c++
#include <iostream>


int main(){
	int x;
	std::cin >> x;
	std::cout << "Hello World!";


	std::cin.ignore(1024,'\n');
	std::cout << "\nPress enter to continue...";
	std::cin.get();
	
	return 0;
}