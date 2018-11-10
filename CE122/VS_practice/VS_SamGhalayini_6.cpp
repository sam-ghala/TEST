/******************************************************************
//
// Sam Ghalayini
// Visual Studio 6 Arrays
// 10/17/2018
// Program: various functions that takes the sum, number of negative numbers, 
// largest number index, and standard deviation of two provided arrays.
//
******************************************************************/

#include <iostream>
#include <array>
#include <iomanip>
#include <algorithm>
#include <cmath>

int arrSum(int * x, int y);
int arrCountNeg(int * x, int y);
int largestIndex(int * x, int y);
double stdev(int * x, int y);
double DoubleArrSum(double * x,int y);

int main()
{
	int x[] = {-1, 4, 4, 2, 4, -5, -2, 1};
	int x2[] = {-1, -4, -9, -16, -25};

	int y = sizeof(x) / sizeof(x[0]);
	int y2 = sizeof(x2) / sizeof(x2[0]);

	std::cout << arrSum(x,y) << " is the sum of the first array." << std::endl;
	std::cout << arrSum(x2,y2) << " is the sum of the second array." << std::endl << std::endl;

	std::cout << arrCountNeg(x,y) << " negative numbers in the first array." << std::endl;
	std::cout << arrCountNeg(x2,y2) << " negative numbers in the second array." << std::endl << std::endl;

	std::cout << largestIndex(x,y) << " is the index of the largest number in the first array." << std::endl;
	std::cout << largestIndex(x2,y2) << " is the index of the largest number in the second array." << std::endl << std::endl;

	std::cout << std::fixed << std::setprecision(4);
	
	std::cout << stdev(x,y) << " is the standard deviation of the first array." << std::endl;
	std::cout << stdev(x2,y2) << " is the standard deviation of the second array." << std::endl << std::endl;

	return 0;
}

int arrSum(int * x, int y)
{
	int sum = 0;
	for(int i = 0; i < y; i++){
		sum = sum + x[i];
	}
	return sum;
}
double DoubleArrSum(double * x, int y)
{
	double sum = 0;
	for(int i = 0; i < y; i++){
		sum = sum + x[i];
	}
	return sum;
}
int arrCountNeg(int * x, int y)
{	
	int count = 0;
	for(int i = 0; i < y; i++){
		if(x[i] < 0)
			count++;
	}
	return count;
}
int largestIndex(int * x, int y)
{
	int first = x[0];
	int max = 0;
	for(int i = 0; i < y; i++){
		if(x[i] >= first){
			first = x[i];
			max = i;
		}
	}
	return max;
}
double stdev(int * x, int y)
{
	double p = y;
	double mean = arrSum(x,y)/p;
	double newarr[y-1];
	double square;
	for(int i = 0; i < y; i++){
		square = std::pow((x[i] - mean),2);
		newarr[i] = square;
	}
	double stdevMean = DoubleArrSum(newarr,y)/p;
	double stdeValue = std::sqrt(stdevMean);
	return stdeValue;
}
