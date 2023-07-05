//
// Created by 曹震 on 2023/7/5.
//
#include <iostream>

int age_month(int);

int main()
{
    using namespace std;

    int age;
    cout << "Enter your age: ";
    cin >> age;
    int month = age_month(age);

    cout << age << " years is " << month << " months." << endl;

    return 0;
}

int age_month(int age)
{
    return age * 12;
}