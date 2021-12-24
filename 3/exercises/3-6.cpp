/*
    Use a range for to change all the characters in a string to X.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enterh any word here:" << endl;
    cin >> str;
    for (auto &c : str){
        c = 'X';  // Note: use ' ' here istead of " "
    }
    cout << "your word turns into: " << str << endl;
}