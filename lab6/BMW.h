#pragma once
#include "Car.h"

class BMW : public Car {
public:
	BMW();
	float GoCar(bool& b, int, int) override;
	char* GetName() override;
};