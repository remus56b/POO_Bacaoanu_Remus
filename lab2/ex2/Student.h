#pragma once
#include <iostream>
  

class Student
{
	char name[20];
	float mathGrade;
	float englishGrade;
	float historyGrade;

public:

	void setName(const char* name);
	char* getName();
	void setMathGrade(float mathGrade);
	float getMathGrade();
	void setEnglishGrade(float englishGrade);
	float getEnglishGrade();
	void setHistoryGrade(float historyGrade);
	float getHistoryGrade();
	float averageGrade();

};