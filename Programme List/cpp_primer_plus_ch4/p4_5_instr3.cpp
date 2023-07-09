//
// Created by 曹震 on 2023/7/9.
//
#include <iostream>
int main ()
{
    using namespace std;
    const int ArSize = 20;
    char name [ArSize];
    char dessert [ArSize];

    cout << "Enter your name: \n";
    cin.get(name, ArSize).get(); // read string, newline(return)
    cout << "Enter your favorite dessert: \n";
    cin.get(dessert, ArSize).get();

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}