#include "Car.h"
#include "RangeRover.h"
#include "Vreme.h"
#include <string>
using namespace std;

RangeRover::RangeRover() {
	fuelCapacity = 70;
	fuelConsumption = 30;
	averageSpeed[Rain] = 50;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 40;
	name = (char*)"RangeRover";
}

float RangeRover::GoCar(bool& b, int w, int circuitLength) {
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* RangeRover::GetName() {
	return name;
}
