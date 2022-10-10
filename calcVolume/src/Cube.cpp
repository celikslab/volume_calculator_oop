//============================================================================
// Name        : Cube.cpp
// Author      : Muhammed Emin CELIK
// Version     : 0.1.0
// Copyright   : Your copyright notice
// Description : Cube Class
//============================================================================

#include "Cube.hpp"

namespace Calculator {


Cube::Cube() {

}

Cube::Cube(int length) {

	cubeData.data.length = length;
	cubeData.data.breadth = length;
	cubeData.data.height = length;
}



int Cube::getLength() {

	return cubeData.data.length;;
}


int Cube::getBreadth() {

	return cubeData.data.breadth;
}


int Cube::getHeight() {

	return cubeData.data.height;
}


long Cube::CalculateVolume() {

	cubeData.data.volume = cubeData.data.length * cubeData.data.breadth * cubeData.data.height;

	return cubeData.data.volume;
}



Cube::~Cube() {

}

Cube::Cube(const Cube &other) {

}

} /* namespace Calculator */
