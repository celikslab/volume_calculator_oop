//============================================================================
// Name        : Cube.hpp
// Author      : Muhammed Emin CELIK
// Version     : 0.1.0
// Copyright   : Your copyright notice
// Description : Cube Class
//============================================================================

#ifndef CUBE_HPP_
#define CUBE_HPP_


#include "Shape.hpp"


namespace Calculator {


union cube_data_type{
	struct {
	  int length;
	  int breadth;
	  int height;
	  long volume;
	} data;
};



class Cube: public Shape {
public:
	Cube();
	Cube(int length);

	int getLength(void) override;
	int getBreadth(void) override;
	int getHeight(void) override;
	long CalculateVolume(void) override;

	virtual ~Cube();
	Cube(const Cube &other);

private:
	cube_data_type cubeData;
};



} /* namespace Calculator */

#endif /* CUBE_HPP_ */
