#pragma once
#include "Car.h"
#include <string>
#include "Vreme.h"

using namespace std;

class Circuit {
private:
	int length;
	Car* car[10];
	float timeToFinish[10];
	bool finish[10];

	int cars ;
	int v;
	

public:
	
	Circuit();

	void SetLength(int );
	void SetWeather(Vreme v);
	void AddCar(Car* car);

	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();


};