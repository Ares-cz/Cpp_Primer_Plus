//
// Created by 曹震 on 2023/7/5.
//
#include <iostream>
double long2ma(double);

int main()
{
    using namespace std;

    double distance;
    cout << "Please enter a distance in long: ";
    cin >> distance;
    double ma = long2ma(distance);
    cout << endl;

    cout << distance << "long = " << ma << "ma." << endl;

    return 0;
}

double long2ma (double dis)
{
    return 220 * dis;
}