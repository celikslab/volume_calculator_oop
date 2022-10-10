//============================================================================
// Name        : Shape.hpp
// Author      : Muhammed Emin CELIK
// Version     : 0.1.0
// Copyright   : Your copyright notice
// Description : Shape Base Class
//============================================================================

#ifndef SHAPE_HPP_
#define SHAPE_HPP_

namespace Calculator {


class Shape {
public:
	Shape();

	virtual int getLength(void) = 0;
	virtual int getBreadth(void) = 0;
	virtual int getHeight(void) = 0;
	virtual long CalculateVolume(void) = 0;

	virtual ~Shape();
	Shape(const Shape &other);
};



} /* namespace Calculator */

#endif /* SHAPE_HPP_ */
