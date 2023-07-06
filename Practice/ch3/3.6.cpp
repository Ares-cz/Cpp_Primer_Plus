//
// Created by 曹震 on 2023/7/6.
//
#include <iostream>
int main()
{
    using namespace std;

    double mile, gas;
    cout << "Enter the Mileage in kilo: ";
    cin >> mile;
    cout << "Enter the Fuel in L: ";
    cin >> gas;

    double kilo_per_L = gas / mile * 100;
    cout << "The average of fuel comsumption is "
         << kilo_per_L << " L/100Km"
         << endl;
}