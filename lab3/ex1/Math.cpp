#include <iostream>
#include "Math.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int Math::Add(int x, int y) {
	int res;
	res = x + y;
	return res;
}

int Math::Add(int x, int y, int z) {
	int res;
	res = x + y + z;
	return res;
}

double Math::Add(double x, double y) {
	double res;
	res = x + y;
	return res;
}

double Math::Add(double x, double y, double z) {
	double res;
	res = x + y + z;
	return res;
}

int Math::Mul(int x, int y) {
	int res;
	res = x * y;
	return res;
}

int Math::Mul(int x, int y, int z) {
	int res;
	res = x * y * z;
	return res;
}

double Math::Mul(double x, double y) {
	double res;
	res = x * y;
	return res;
}

double Math::Mul(double x, double y, double z) {
	double res;
	res = x * y * z;
	return res;
}

int Math::Add(int count, ...)
{
	va_list args;
	va_start(args, count);

	int sum = 0;
	for (int i = 0; i < count; i++) {
		sum += va_arg(args, int);
	}

	va_end(args);

	return sum;
}


char* Math::Add(const char* str1, const char* str2)
{
	if (str1 == nullptr || str2 == nullptr) {
		return nullptr;
	}

	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int size = len1 + len2 + 1;
	char* result = (char*)malloc(size);
	memset(result, 0, size);
	memcpy(result, str1, len1);
	memcpy(result + len1, str2, len2);

	return result;
}