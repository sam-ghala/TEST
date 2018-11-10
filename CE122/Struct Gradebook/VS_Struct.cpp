//
//Sam Ghalayini
//VS_8 Struct practice
// November 2nd 2018
// This program reads a file of student names, quiz sceores, and exam scores then puts all of the data into a struct and returns averages
// The individual stuendt data (studAve) function can be changed from a for loop to a ehile loop so you can enter in the student and only recieve that student's data instead of the whole class 
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

struct gradeBook{
	std::string lName;
	std::string fName;
	float quiz[10];
	float exam[3];
	float quizAve;
	float examAve;
}studentID[20];

void getData(int & c);
void classAve(int & c);
void studAve(int & c);


int main(){
	std::cout << std::fixed << std::setprecision(2);
	int c = 0;
	getData(c);
	classAve(c);
	studAve(c);
	
	return 0;
}

void getData(int & c)
	{
	std::fstream read;
	read.open("hw8_input.txt");
	while(!read.eof())
	{
		int quizSum = 0;
		int examSum = 0;
		read >> studentID[c].lName >> studentID[c].fName;
		for (int i = 0; i < 10; i ++){
			read >> studentID[c].quiz[i];
			quizSum = quizSum + studentID[c].quiz[i];
		}
		studentID[c].quizAve = quizSum/10.0;
		for (int j = 0; j < 3; j++){
			read >> studentID[c].exam[j];
			examSum = examSum + studentID[c].exam[j];
		}
		studentID[c].examAve = examSum/3.0;
		c++;
	}
	read.close();
	}

void classAve(int & c)
	{
	float classQuiz[10];
	float classQAve = 0;
	for(int k = 0; k < 10; k++)
	{
		for(int i = 0; i < c; i++)
		{
			classQAve = classQAve + studentID[i].quiz[k];
		}
		classQuiz[k] = classQAve/(c-1);
		classQAve = 0;
		std::cout << "Class average on quiz " << k+1 << " is " << classQuiz[k] << std::endl;
	}
	std::cout << std::endl;

	float classExam[3];
	float classEAve = 0;
	for(int k = 0; k < 3; k++)
	{
		for(int i = 0; i < c; i++)
		{
			classEAve = classEAve + studentID[i].exam[k];
		}
		classExam[k] = classEAve/(c-1);
		classEAve = 0;
		std::cout << "Class average on exam " << k+1 << " is " << classExam[k] << std::endl;
	}
}
void studAve(int & c){
	//int index;
	//while (1)
	for(int index = 0; index < c-1; index++)
	{
		//std::cout << "Please enter your student ID to see your grades(enter -1 to exit gradebook): ";
		//std::cin >> index;
		//if(index == -1)
		//	goto endProgram;
		std::cout << "First Name: " << studentID[index].fName << std::endl;
		std::cout << "Last Name: " << studentID[index].lName << std::endl;
		std::cout << "Quiz 1: " << studentID[index].quiz[0] << std::endl;
		std::cout << "Quiz 2: " << studentID[index].quiz[1] << std::endl;
		std::cout << "Quiz 3: " << studentID[index].quiz[2] << std::endl;
		std::cout << "Quiz 4: " << studentID[index].quiz[3] << std::endl;
		std::cout << "Quiz 5: " << studentID[index].quiz[4] << std::endl;
		std::cout << "Quiz 6: " << studentID[index].quiz[5] << std::endl;
		std::cout << "Quiz 7: " << studentID[index].quiz[6] << std::endl;
		std::cout << "Quiz 8: " << studentID[index].quiz[7] << std::endl;
		std::cout << "Quiz 9: " << studentID[index].quiz[8] << std::endl;
		std::cout << "Quiz 10: " << studentID[index].quiz[9] << std::endl;
		std::cout << "Quiz average: " << studentID[index].quizAve << std::endl;
		std::cout << "Exam 1: " << studentID[index].exam[0] << std::endl;
		std::cout << "Exam 2: " << studentID[index].exam[1] << std::endl;
		std::cout << "Exam 3: " << studentID[index].exam[2] << std::endl;
		std::cout << "Exam average: " << studentID[index].examAve << std::endl;
	}
	//endProgram:
;
}










