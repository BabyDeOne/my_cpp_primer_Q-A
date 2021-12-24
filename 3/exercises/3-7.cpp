/*
    What would happen if you define the loop control variable in the 3-6 exercise as type char?
    Predict the results and then change your program to use a char to see if you were right.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enterh any word here:" << endl;
    cin >> str;
    for (char &c : str){
        c = 'X';  // Note: use ' ' here istead of " "
    }
    cout << "your word turns into: " << str << endl;
}

// Answer: The program is still works.