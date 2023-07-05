//
// Created by 曹震 on 2023/7/5.
//

#include <iostream>

double Tem(double);

int main()
{
    using namespace std;

    double cel, fah;
    cout << "Please enter a Celsius value: ";
    cin >> cel;
    fah = Tem(cel);

    cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit." << endl;

    return 0;
}

double Tem(double cel)
{
    return 1.8 * cel + 32.0;
}