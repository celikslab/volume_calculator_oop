################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Cube.cpp \
../src/Cube_test.cpp \
../src/Rectangle.cpp \
../src/Rectangle_test.cpp \
../src/Shape.cpp \
../src/Shape_test.cpp \
../src/calcVolume.cpp 

CPP_DEPS += \
./src/Cube.d \
./src/Cube_test.d \
./src/Rectangle.d \
./src/Rectangle_test.d \
./src/Shape.d \
./src/Shape_test.d \
./src/calcVolume.d 

OBJS += \
./src/Cube.o \
./src/Cube_test.o \
./src/Rectangle.o \
./src/Rectangle_test.o \
./src/Shape.o \
./src/Shape_test.o \
./src/calcVolume.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Cube.d ./src/Cube.o ./src/Cube_test.d ./src/Cube_test.o ./src/Rectangle.d ./src/Rectangle.o ./src/Rectangle_test.d ./src/Rectangle_test.o ./src/Shape.d ./src/Shape.o ./src/Shape_test.d ./src/Shape_test.o ./src/calcVolume.d ./src/calcVolume.o

.PHONY: clean-src

