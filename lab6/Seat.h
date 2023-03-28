#pragma once
#include "Car.h"

class Seat : public Car {
public:
	Seat();
	float GoCar(bool& b, int, int) override;
	char* GetName() override;
};