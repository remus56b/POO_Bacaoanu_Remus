#include "Sort.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
#include <iostream>

using namespace std;


Sort::Sort(int n, int min, int max) {

	this->n = n;
	this->ary = new int[this->n];
	srand(time(NULL));
	int range = max - min + 1;
	for (int i = 0; i < this->n; i++) {
		this->ary[i] = rand() % range;
	}
}

Sort::Sort(int* ary, int n) {
	this->n = n;
	this->ary = new int[this->n];
	for (int i = 0; i < this->n;i++) {
		this->ary[i] = ary[i];
	}
}

Sort::Sort(int n, ...) {
	this->n = n;
	this->ary = new int[this->n];
	va_list v1;
	va_start(v1, n);
	for (int i = 0; i < this->n; i++) {
		this->ary[i] = va_arg(v1,int);
	}
	va_end(v1);
}

Sort::Sort() : ary(new int[5] {1, 2, 3, 4, 5}) {
	this->n = 5;
}

Sort::Sort(const char* string) {
	n = 0;
	for (int i = 0; string[i] != '\0'; i++) {
		if (string[i] == ',')
			n++;
	}
	n++;
	ary = new int[n];

	int nr = 0;
	int i = 0;
	for (int l = 0; string[l] != '\0'; l++) {
		if (string[l] == ',') {
			ary[i++] = nr;
			nr = 0;
			continue;
		}

		nr = nr * 10 + (string[l] - '0');

	}
	ary[i++] = nr;
}

void Sort::InsertSort(bool ascendent) {

	for (int i = 1; i < this->n; i++) {
		int c = ary[i];
		int j = i - 1;
		while (j >= 0 && ary[j] > c) {
			ary[j + 1] = ary[j];
			j--;
		}
		ary[j + 1] = c;
	}

	if (ascendent) {
		for (int i = 1; i < this->n; i++) {
			int c = ary[i];
			int j = i - 1;
			while (j >= 0 && ary[j] < c) {
				ary[j + 1] = ary[j];
				j--;
			}
			ary[j + 1] = c;
		}
	}

}

void Sort::swap(int& a, int& b) {
	int aux = a;
	a = b;
	b = aux;
}


void::Sort::BubbleSort(bool ascendent) {
	for (int i = 0; i < n - 1; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			if (ary[j] > ary[j + 1]) {
				swap(ary[j], ary[j + 1]);
			}
		}
	}

	if (ascendent) {
		for (int i = 0; i < n - 1; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				if (ary[j] > ary[j + 1]) {
					swap(ary[j], ary[j + 1]);
				}
			}
		}
	}
}

void Sort::Print() {
	for (int i = 0; i < n; i++) {
		std::cout << GetElementFromIndex(i) << " ";
	}
	std::cout << "\n";
}

int Sort::GetElementFromIndex(int index) {
	return ary[index];
}

int Sort::GetElementsCount() {
	return n;
}



void Sort::QuickSort(bool ascendent) {
	this->quickSort(0, n - 1);

	if (ascendent) {
		reverseArray();
	}
}
void Sort::quickSort(int low, int high) {
	if (low < high) {
		int pi = partition(low, high);

		quickSort(low, pi - 1);
		quickSort(pi + 1, high);
	}
}
int Sort::partition(int low, int high) {

	int pivot = ary[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {
		if (ary[j] < pivot) {
			i++;
			swap(ary[i], ary[j]);
		}
	}
	swap(ary[i + 1], ary[high]);
	return (i + 1);
}

void Sort::reverseArray() {
	for (int i = 0; i < n / 2; i++) {
		this->swap(ary[i], ary[n - i - 1]);
	}
}