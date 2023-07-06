//
// Created by 曹震 on 2023/7/6.
//
#include <iostream>
const int deg2min = 60;
const int deg2sec = deg2min * 60;

int main() {
    using namespace std;
    double deg, min, sec;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;

    double lat = deg + min / deg2min + sec / deg2sec;

    cout << deg << " degrees, "
         << min << " minutes, "
         << sec << " seconds = "
         << lat << " degrees" << endl;

    return 0;
}