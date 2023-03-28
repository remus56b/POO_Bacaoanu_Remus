#pragma once
#include "Car.h"


class Fiat : public Car {
public:
	Fiat();
	float GoCar(bool& b, int, int) override;
	char* GetName() override;
};