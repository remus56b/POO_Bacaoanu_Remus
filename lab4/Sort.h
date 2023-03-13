#pragma once
class Sort

{

    // add data members
    int n,* ary;
    void swap(int&, int&);
    void quickSort(int, int);
    void reverseArray();
    int partition(int, int);

public:

    // add constuctors

    Sort(int n, int min, int max);

    Sort(int* ary, int n);
    
    Sort(const char* string);
    
    Sort(int n, ...);

    Sort();

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};