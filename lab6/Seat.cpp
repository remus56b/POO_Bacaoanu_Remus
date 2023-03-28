#include "Car.h"
#include "Seat.h"
#include "Vreme.h"
#include <string>
using namespace std;

Seat::Seat() {
	fuelCapacity = 54;
	fuelConsumption = 20;
	averageSpeed[Rain] = 30;
	averageSpeed[Sunny] = 50;
	averageSpeed[Snow] = 20;
	name = (char*)"Seat";
}

float Seat::GoCar(bool& b, int w, int circuitLength) {
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Seat::GetName() {
	return name;
}
