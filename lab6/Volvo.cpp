#include "Car.h"
#include "Volvo.h"
#include "Vreme.h"
#include <string>
using namespace std;

Volvo::Volvo() {
	fuelCapacity = 64;
	fuelConsumption = 18;
	averageSpeed[Rain] = 45;
	averageSpeed[Sunny] = 60;
	averageSpeed[Snow] = 30;
	name = (char*)"Volvo";
}

float Volvo::GoCar(bool& b, int w, int circuitLength) {
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Volvo::GetName() {
	return name;
}
