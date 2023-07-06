//
// Created by 曹震 on 2023/7/6.
//
#include <iostream>

const double k2m = 0.6214;
const double g2l = 3.785;
int main()
{
    using namespace std;
    double cost;
    cout << "Enter the fuel consumption: ";
    cin >> cost;

    double us_cost = cost / g2l;
    double us_dist = 100 * k2m;

    double us = us_dist/us_cost;

    cout << "The fuel consumption in us is "
         << us
         << " Miles/Gallon (mpg)"
         << endl;

    return 0;

}