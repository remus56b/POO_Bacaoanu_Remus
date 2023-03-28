#pragma once
#include "Vreme.h"

class Car {

public:
	int fuelCapacity;
	int fuelConsumption;
	int averageSpeed[3];
	char* name;
	
	virtual char* GetName() = 0;
	virtual float GoCar(bool&, int, int) = 0;
	


};
