//============================================================================
// Name        : calcVolume.cpp
// Author      : Muhammed Emin CELIK
// Version     : 0.1.0
// Copyright   : Your copyright notice
// Description : Main in C++
//============================================================================

#include <iostream>
#include "Cube.hpp"
#include "Rectangle.hpp"

using namespace std;


bool operator<(Calculator::Shape& a, Calculator::Shape& b);

ostream& operator<<(ostream& os, Calculator::Shape& B);



int main() {

	Calculator::Rectangle rectangle_1(2, 3, 5);
	Calculator::Rectangle rectangle_2(4, 8, 10);
	Calculator::Cube cube_1(3);
	Calculator::Cube cube_2(5);


	cout << cube_1;
	cout << cube_2;
	cout << rectangle_1;
	cout << rectangle_2;


	if( cube_1 < cube_2){

		cout << "cube_2 is bigger than cube_1" << endl;
	}
	if( cube_2 < cube_1 ){

		cout << "cube_1 is bigger than cube_2" << endl;
	}


	return 0;
}


ostream& operator<<(ostream& os, Calculator::Shape& B)
{
    os << "length = " << B.getLength() << endl;
    os << "breadth = " << B.getBreadth() << endl;
    os << "height = " << B.getHeight() << endl;
    os << "volume = " << B.CalculateVolume() << endl;
    return os;
}


bool operator<(Calculator::Shape& a, Calculator::Shape& b){

	return a.CalculateVolume() < b.CalculateVolume();
}
