#pragma once
#include "Car.h"

class Volvo : public Car {
public:
	Volvo();
	float GoCar(bool& b, int, int) override;
	char* GetName() override;
};