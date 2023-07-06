//
// Created by 曹震 on 2023/7/5.
//
#include <iostream>
const int Foot2Inch = 12;

int main()
{
    using namespace std;

    int height;
    cout << "Enter your height in Inch:__\b\b";
    cin >> height;

    int height_foot = height / Foot2Inch;
    int height_inch = height % Foot2Inch;

    cout << "Your height in Inch is: "
         << height
         << ". \n"
         << "It can be transferred to "
         << height_foot
         << " Foot "
         << height_inch
         << " Inch."
         << endl;

    return 0;
}