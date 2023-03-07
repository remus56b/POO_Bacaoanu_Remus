#include<iostream>
#include "Math.h"

using namespace std;

int main() {

	int a, b, c;
	a = 3;
	b = 4;
	c = 5;
	int sum = Math::Add(a, b);
	int sum2 = Math::Add(a, b, c);
	int mul = Math::Mul(a, b);
	int mul2 = Math::Mul(a, b, c);
	cout << "a + b = " << sum<< '\n';
	cout << "a + b + c = " << sum2<<'\n';
	cout << "a * b = " << mul<<'\n';
	cout << "a * b * c = " << mul2<<'\n';

	cout << "2.5 * 3.7 * 4.1 = " << Math::Mul(2.5, 3.7, 4.1)<< '\n';
	cout << "3.6 * 2.9 = " << Math::Mul(3.6, 2.9)<<'\n';
	
	char s1[] = { '3' };
	char s2[] = { '4' };
	 
	Math m1;
	cout << m1.Add("are ", "ceva")<< '\n';
	
	cout << "5 + 3 + 2 + 4 + 1 = " << Math::Add(5,4,5,6) << '\n';
	return 0;
}