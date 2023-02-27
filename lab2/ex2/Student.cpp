#include "Student.h"
#include <iostream>


using namespace std;
 
void Student::setName(const char* name) {
	memset(this->name, 0, 20);
	strcpy_s(this->name, 20, name);
}

char* Student::getName() {
	return this->name;
}
void Student::setMathGrade(float x) {
	
	if(x > 0 && x <= 10){
		this->mathGrade = x;
	}	
}

void Student::setHistoryGrade(float x) {

	if (x > 0 && x <= 10) {
		this->historyGrade = x;
	}
}

void Student::setEnglishGrade(float x) {

	if (x > 0 && x <= 10) {
		this-> englishGrade = x;
	}
}

float Student::getMathGrade() {
	return this->mathGrade;
}

float Student::getEnglishGrade() {
	return this->englishGrade;
}

float Student::getHistoryGrade() {
	return this->historyGrade;
}

float Student::averageGrade() {
	return (float)(this->mathGrade + this->englishGrade + this->historyGrade) / 3;
}