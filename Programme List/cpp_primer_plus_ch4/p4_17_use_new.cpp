//
// Created by 曹震 on 2023/7/26.
//
#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    int* pt = new int;
    * pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;

    cout << "int ";
    cout << "value = " << * pt << ": location = " << pt << endl;

    double* pd = new double;
    *pd = 100000001.0;

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;

    cout << "size of pt = " << sizeof(pt);
    cout << "; size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << "; size of *pd = " << sizeof(*pd) << endl;

    cout << "size of int: " << sizeof(int) << endl;
    cout << "size of double: " << sizeof(double) << endl;

    return 0;
}