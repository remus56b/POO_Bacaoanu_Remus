#include "Car.h"
#include "Fiat.h"
#include "Vreme.h"
#include <string>
using namespace std;

Fiat::Fiat() {
	fuelCapacity = 54;
	fuelConsumption = 10;
	averageSpeed[Rain] = 30;
	averageSpeed[Sunny] = 50;
	averageSpeed[Snow] = 20;
	name = (char*)"Fiat";
}

float Fiat::GoCar(bool& b, int w, int circuitLength) {
	int speed = averageSpeed[w];

	float hours = fuelCapacity / fuelConsumption;
	float distance = hours * speed;

	b = distance > circuitLength;
	return (hours * circuitLength / distance);
}

char* Fiat::GetName() {
	return name;
}
