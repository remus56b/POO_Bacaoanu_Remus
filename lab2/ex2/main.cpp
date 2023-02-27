#include "Student.h"
#include "Global.h"
#include <iostream>

using namespace std;

int main()
{
	Student s1;
	s1.setName("Petru");
	s1.setEnglishGrade(6);
	s1.setHistoryGrade(8);
	s1.setMathGrade(9);
	float avgS1 = s1.averageGrade();
	cout << avgS1 << '\n';
	
	Student s2;
	s2.setName("Pavel");
	s2.setEnglishGrade(5);
	s2.setHistoryGrade(6);
	s2.setMathGrade(10);
	float avgS2 = s2.averageGrade();
	cout << avgS2 << '\n';

	/*if (nameC(s1, s2) == 1) {
		cout << "studentul 1 dupa studentul 2" << "\n";
	}
	else if (nameC(s1, s2) < 0) {
		cout << "studentul 2 dupa studentul 1" << "\n";
	}
	else cout << "studentul 1 = studentul 2" << "\n";*/

	cout << "name: " << nameC(&s1, &s2)<<'\n';
	cout << "math grade: " << mathC(&s1, &s2)<<'\n';
	cout << "eng grade: " << englishC(&s1, &s2)<<'\n';
	cout << "history grade: " << historyC(&s1, &s2) << '\n';
	cout << "avg grade: " << avgC(&s1, &s2) << '\n';

	return 0;
}