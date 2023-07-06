//
// Created by 曹震 on 2023/7/6.
//
#include <iostream>
int main()
{
    using namespace std;
    // '\a' equal to '\007'
    cout << "\007Operation \"HyperHYPE\" is now activated!\n";
    cout << "Enter your agent code:__________\b\b\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan z3!\n";

    return 0;
}
