#include "Car.h"
#include "BMW.h"
#include "Vreme.h"
#include <string>
using namespace std;

BMW::BMW() {
	fuelCapacity = 65;
	fuelConsumption = 25;
	averageSpeed[Rain] = 45;
	averageSpeed[Sunny] = 70;
	averageSpeed[Snow] = 20;
	name = (char*)"BMW";
}

float BMW::GoCar(bool& b, int w, int circuitLength) {
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* BMW::GetName() {
	return name;
}
