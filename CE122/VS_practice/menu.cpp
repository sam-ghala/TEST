// 
// Sam Ghalayini
// Visual Studio 4 Candy Store
// 10/05/2018
//


#include <iostream>
#include <iomanip>

using namespace std;
void MakeSale(int & x,int & y, int & z, int & c); // function prototype
int Customers(int & x);
void Sales(int & x,int & y, int & z);

int main()
{
	int choice, MI, R, MM, sale, cust, open;
	enum candy{sales,customer,candies,exit};
	MI = 0;
	R = 0;
	MM = 0;
	sale = 0;
	cust = 0;

	cout << "Would you like to open the Candy Store?" << endl << "1 = Yes" << endl << "0 = No" << endl;
	cin >> open;
	cout << endl;
	if (open == 0) // false input checker
		cout << "See you tomorrow, have a good day!" << endl;
	else if (open == 1)
	{
	while(1) // enter menu 
	{
		cout << "Would you like to:" << endl << "0) Enter a sale?" << endl << "1) See how many customers you've had?" << endl <<  "2) See how many boxes of each candy you've sold and how much money you've made?" << endl << "3) EXIT PROGRAM" << endl;
		cin >> choice;
		candy candies = candy(choice);
		cout << endl;
		switch(candies)
		{
			case 0:
			{
				MakeSale(MI, R, MM, cust); // function for making a sale
				break;
			}
			case 1:
			{
				cout << Customers(cust) << " customers so far." << endl << endl; // function to report number of customers
				break;
			}
			case 2:
			{
				Sales(MI, R, MM); // function to see how many boxes of what type of candy has been sold and total revenue
				break;
			}
			case 3: // if user wants to exit the program
			{
				cout << "EXITING PROGRAM" << endl << endl;
			}
		}
		if (choice == 3) // exit infinite while loop at end of the day after recording sales
			break;
	}
	}
	else
		cout << "Invalid input, exiting program, see you tomorrow, have a great day!" << endl; // bad input for speical chacters 
	return 0;
}

void MakeSale(int & x,int & y, int & z, int & c)
{
	cout << "What type of candy did you sell?" << endl << "1)Mike and Ikes" << endl << "2)Raisettes" << endl << "3)M&M's" << endl << endl;
	int choice, num;
	cin >> choice;
	cout << endl;
	switch(choice)
	{
		case 1:
		{
			cout << "How many boxes? ";
			cin >> num;
			cout << endl;
			x = x + num;
			c++;
			break;
		}
		case 2:
		{
			cout << "How many boxes? ";
			cin >> num;
			cout << endl;
			y = y + num;
			c++;
			break;
		}
		case 3:
		{
			cout << "How many boxes? ";
			cin >> num;
			cout << endl;
			z = z + num;
			c++;
			break;
		}
	}


}
int Customers(int & x)
{
	return x;
}
void Sales(int & x,int & y, int & z)
{
	cout << setw(36) << left << "Number of boxes for Mike and Ikes: " << setw(10) << left << (x) << endl << setw(36) << left <<  "Number of boxes for Raisettes: " << setw(10) << left << (y) << endl << setw(36) << left << "Number of boxes for M&M's: " << setw(10) << left << (z) << endl << setw(36) << left << "Total revenue: " << "$" << (x*4)+(y*2.50)+(z*3.50) << endl << endl;
}