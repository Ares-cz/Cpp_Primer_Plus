//
// Created by 曹震 on 2023/7/5.
//
#include <iostream>
double Dis(double);

int main()
{
    using  namespace std;
    double light_year, astro_unit;

    cout << "Enter the number of light year: ";
    cin >> light_year;
    astro_unit = Dis(light_year);
    cout << light_year << " light years = " << astro_unit << " astronomical units." << endl;

    return 0;
}

double Dis(double light)
{
    return light * 63240;
}