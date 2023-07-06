//
// Created by 曹震 on 2023/7/6.
//
#include <iostream>
const int Foot2Inch = 12;
const double Inch2Meter = 0.0254;
const double Kilogram2Pound = 2.2;

double Height (int, int);
double Weight (double);
double BMI (double, double);

int main()
{
    using namespace std;

    int height_foot, height_inch, weight_pound;
    cout << "Enter your the Foot of your height: ";
    cin >> height_foot;
    cout << "Enter your the Inch of your height: ";
    cin >> height_inch;

    cout << "Enter you weight in Pound: ";
    cin >> weight_pound;

    double height_meter = Height(height_inch, height_foot);
    double weight_kilogram = Weight(weight_pound);
    double bmi = BMI(height_meter, weight_kilogram);

    cout << "Your BMI is: " << bmi << "." << endl;

    return 0;

}

double Height(int inch, int foot)
{
    int height = foot * Foot2Inch + inch;
    return height * Inch2Meter;
}

double Weight(double pound)
{
    return pound / Kilogram2Pound;
}

double BMI(double height, double weight)
{
    return weight / (height*height);
}