#include "Circuit.h"
#include "Car.h"
#include "Vreme.h"
#include <string>
#include <iostream>

using namespace std;

Circuit::Circuit() {
	cars = 0;
}

void Circuit::SetLength(int length) {
	this->length = length;
}

void Circuit::SetWeather(Vreme v) {
	this->v = v;
}

void Circuit::AddCar(Car* c) {
	car[cars++] = c;
}

void Circuit::Race() {
	for (int i = 0; i < cars; i++) {
		bool terminat = false;
		timeToFinish[i] = car[i]->GoCar(terminat, v, length);
		finish[i] = terminat;
	}
}


void Circuit::ShowFinalRanks() {
	cout << "The time of the cars that are finished \n";
	for (int i = 0; i < cars; i++) {
		if (finish[i]) {
			printf("%d - %d  \n" ,car[i]->GetName(),timeToFinish[i] );
		}
	}
	cout << "\n";
}

void Circuit::ShowWhoDidNotFinish() {
	cout << "The time of the cars that are not finished \n";
	for (int i = 0; i < cars; i++) {
		if (!finish[i]) {
			printf("%d - %d  \n", car[i]->GetName(), timeToFinish[i]);
		}
	}
	cout << "\n";
}