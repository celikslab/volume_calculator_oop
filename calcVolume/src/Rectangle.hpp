//============================================================================
// Name        : Rectangle.hpp
// Author      : Muhammed Emin CELIK
// Version     : 0.1.0
// Copyright   : Your copyright notice
// Description : Rectangle Class
//============================================================================

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include "Shape.hpp"

namespace Calculator {


union rectangle_data_type {
	struct {
	  int length;
	  int breadth;
	  int height;
	  long volume;
	} data;
};



class Rectangle: public Shape {
public:
	Rectangle();
	Rectangle(int length, int breadth, int height);

	int getLength(void) override;
	int getBreadth(void) override;
	int getHeight(void) override;
	long CalculateVolume(void) override;

	virtual ~Rectangle();
	Rectangle(const Rectangle &other);

private:
	rectangle_data_type rectangleData;
};



} /* namespace Calculator */

#endif /* RECTANGLE_HPP_ */
