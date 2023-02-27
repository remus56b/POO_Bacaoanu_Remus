#include "Global.h"
#include "Student.h"
#include <cstring>
#include <iostream>

using namespace std;

int nameC(Student *s1, Student *s2) {
	char* name1 = s1->getName();
	char* name2 = s2->getName();
	
	if (strcmp(name1, name2) == 0) {
		return 0;
	}
	else if (strcmp(name1, name2) > 0) {
		return 1;
	}
	else
		return -1;
}

int avgC(Student *s1, Student *s2) {
	float avg1 = s1->averageGrade();
	float avg2 = s2->averageGrade();

	if (avg1 == avg2) {
		return 0;
	}
	else if (avg1 > avg2) {
		return 1;
	}
	else
		return -1;
}

int mathC(Student *s1, Student *s2) {
	float math1 = s1->getMathGrade();
	float math2 = s2->getMathGrade();

	if (math1 == math2) {
		return 0;
	}
	else if (math1 > math2) {
		return 1;
	}
	else
		return -1;
}

int englishC(Student *s1, Student *s2) {
	float eng1 = s1->getEnglishGrade();
	float eng2 = s2->getEnglishGrade();

	if (eng1 == eng2) {
		return 0;
	}
	else if (eng1 > eng2) {
		return 1;
	}
	else
		return -1;
}

int historyC(Student *s1, Student *s2) {
	float h1 = s1->getHistoryGrade();
	float h2 = s2->getHistoryGrade();

	if (h1 == h2) {
		return 0;
	}
	else if (h1 > h2) {
		return 1;
	}
	else
		return -1;
}
