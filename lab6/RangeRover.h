#pragma once
#include "Car.h"

class RangeRover : public Car {
public:
	RangeRover();
	float GoCar(bool& b, int, int) override;
	char* GetName() override;
};