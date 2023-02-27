#include <iostream>
#include "NumberList.h"

using namespace std;

int main() {
	NumberList v;
	v.Init();
	v.Add(10); v.Add(20);v.Add(30);v.Add(15);
	v.Print();
	v.Sort();
	v.Print();
	return 0;
}

