//
// Created by 曹震 on 2023/7/5.
//
#include <iostream>
void show(int, int);

using namespace std;

int main()
{
    int hour, minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;

    show(hour, minute);
    return 0;
}

void show(int h, int m)
{
    cout << "Time: " << h << ":" << m;
}