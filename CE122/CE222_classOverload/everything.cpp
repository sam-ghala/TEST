//
//
// Sam Ghalayini
// 01/26/2018
// HW 3 - Overloading Operators 
// Classes, operator overloading, friends
//
//

#include "matrixType3.h"
//#pragma once
#include <iostream>
class matrixType3{
    int matrix[3][3];
public:
    void setElement(int row, int column, int newValue); //to set matrix[row][column] to newvalue 
    int getElement(int row, int column); //to return the value in position [row][column]
    void setMatrix(int a,int b,int c,int d,int e,int f,int g,int h,int i); //to set all the values
    void display(); //to display the whole matrix on the screen in 3 by 3 form
    void displayRow(int row); //to print just row "row"
    void displayColumn(int column); //to print just column "column"
    const matrixType3 & operator+(const matrixType3 & m)const;
    const matrixType3 & operator-(const matrixType3 & m)const;
    const matrixType3 & operator*(const matrixType3 & m)const;
    const matrixType3 & operator==(const matrixType3 & m)const;
    matrixType3();
    matrixType3(int a,int b,int c,int d,int e,int f,int g,int h,int i);
    ~matrixType3();
}

//#inlcude "matrixType3.h"
void matrixType3::setElement(int row, int column, int newValue){
    matrix[row][column] = newValue;
}
int matrixType3::getElement(int row,int column){
    return matrix[row][column];
}
void matrixType3::setMatrix(int a,int b,int c,int d,int e,int f,int g,int h,int i){
    matrix[0][0] = a;
    matrix[0][1] = b;
    matrix[0][2] = c;
    matrix[1][0] = d;
    matrix[1][1] = e;
    matrix[1][2] = f;
    matrix[2][0] = g;
    matrix[2][1] = h;
    matrix[2][2] = i;
}
void matrixType3::display(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
void matrixType3::displayRow(int row){
    for(int i = 0; i < 3; i++){
        std::cout << matrix[row][i] << " ";
    }
    std::cout << std::endl;
}
void matrixType3::displayColumn(int column){
    for(int i = 0; i < 3; i++){
        std::cout << matrix[i][column] << " ";
    }
    std::cout << std::endl;
}
const matrixType3 & matrixType3::operator+(const matrixType3 & m)const{
    matrixType3 mat;
    for(int i = 0; i < 3; i++){
        for{int j = 0; j < 3; j++}{
            mat[i][j] = matrix[i][j] + m[i][j];
        }
    }
    return mat;
}
const matrixType3 & matrixType3::operator-(const matrixType3 & m)const{
    matrixType3 mat;
    for(int i = 0; i < 3; i++){
        for{int j = 0; j < 3; j++}{
            mat[i][j] = matrix[i][j] - m[i][j];
        }
    }
    return mat;
}
const matrixType3 & matrixType3::operator*(const matrixType3 & m)const{
    matrixType3 mat;


}
const matrixType3 & matrixType3::operator==(const matrixType3 & m)const{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matrix[i][j] != m[i][j])
                return 0;
        }
    }
}
matrixType3::matrixType3(){
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            matrix[i][j] = 0;
}
matrixType3::matrixType3(int a,int b,int c,int d,int e,int f,int g,int h,int i){
    matrix[0][0] = a;
    matrix[0][1] = b;
    matrix[0][2] = c;
    matrix[1][0] = d;
    matrix[1][1] = e;
    matrix[1][2] = f;
    matrix[2][0] = g;
    matrix[2][1] = h;
    matrix[2][2] = i;

}
matrixType3::~matrixType3(){
    std::cout << "Out of scope" << std::endl;
}

int main(){
    matrixType3 obj1, obj2, obj3;
    obj1.setMatrix(0,1,2,3,4,5,6,7,8);
    obj2.setMatrix(1,2,3,4,5,6,7,8,9);
    obj3.setMatrix(2,3,4,5,6,7,8,9,10);
    matrixType3 obj4(3,4,5,6,7,8,9,10,11);
    obj4.setElement(0,0,58);
    std::cout << "Element in obj4[0][0] : " << obj4.getElement(0,0) << std::endl;
    obj1.displayRow(1);
    obj2.displayColumn(2);
    obj3.display();

    matrixType3 obj5 = obj1 + obj2;
    obj5.display();
    matrixType3 obj6 = obj3 - obj4;
    obj6.display();
    matrixType3 obj7 = obj5 * obj6;
    obj7.display();
    std::cout << "Is obj5 and obj 6 equal? : " << obj5 == obj6 << std::endl;


    




    return 0;
}