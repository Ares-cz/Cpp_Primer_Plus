//
// Created by 曹震 on 2023/7/6.
//
#include <iostream>
const int day2sec = 86400;
const int hour2sec = 3600;
const int minute2sec = 60;

int main()
{
    using namespace std;

    long sec;
    cout << "Enter the number of seconds: ";
    cin >> sec;

    int day = sec / day2sec;
    int hour = (sec % day2sec) / hour2sec;
    int minute = ((sec % day2sec) % hour2sec) / minute2sec;
    int second = ((sec % day2sec) % hour2sec) % minute2sec;

    cout << sec << " seconds = "
         << day << " days, "
         << hour << " hours, "
         << minute << " minutes, "
         << second << " seconds."
         << endl;

    return 0;
}