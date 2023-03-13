#include<iostream>
#include"Sort.h"

using namespace std;

int main() 
{
    int* vector = new int[8];
    for (int i = 0; i < 8; i++) {
        vector[i] = i;
    }

    Sort s4("3,1,45,15,6,21");
    s4.BubbleSort(true);
    s4.Print();
    cout << '\n';


    Sort s1(3, 4, 6, 8);
    s1.BubbleSort(false);
    s1.Print();
    cout << '\n';

    Sort s2(3, 45, 67);
    s2.InsertSort(true);
    s2.Print();
    cout << '\n';

    Sort s3(vector, 8);
    s3.QuickSort(true);
    s3.Print();
    cout << '\n';
	
	
	return 0;
}