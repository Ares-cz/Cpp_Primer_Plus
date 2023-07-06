//
// Created by 曹震 on 2023/7/6.
//
#include <iostream>

int main()
{
    using namespace std;

    long long world_pop, us_pop;
    cout << "Enter the world's population: ";
    cin >> world_pop;
    cout << "Enter the population of the US: ";
    cin >> us_pop;
    double percent = double(us_pop) / double(world_pop) * 100;

    cout << "The population of the US is " << percent << "% of the world population." << endl;

    return 0;
}