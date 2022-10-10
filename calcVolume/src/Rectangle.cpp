//============================================================================
// Name        : Rectangle.cpp
// Author      : Muhammed Emin CELIK
// Version     : 0.1.0
// Copyright   : Your copyright notice
// Description : Rectangle Class
//============================================================================

#include "Rectangle.hpp"

namespace Calculator {


Rectangle::Rectangle() {

}

Rectangle::Rectangle(int length, int breadth, int height) {

	rectangleData.data.length = length;
	rectangleData.data.breadth = breadth;
	rectangleData.data.height = height;

}



int Rectangle::getLength() {

	return rectangleData.data.length;
}


int Rectangle::getBreadth() {

	return rectangleData.data.breadth;
}


int Rectangle::getHeight() {

	return rectangleData.data.height;
}


long Rectangle::CalculateVolume() {

	rectangleData.data.volume = rectangleData.data.length * rectangleData.data.breadth * rectangleData.data.height;

	return rectangleData.data.volume;
}



Rectangle::~Rectangle() {

}

Rectangle::Rectangle(const Rectangle &other) {

}

} /* namespace Calculator */
