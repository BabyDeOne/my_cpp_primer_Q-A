/*
    Write a program that reads a string of chatacters including punctuation and writes what was read but with the 
    punctuation removed.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str,newstr;
    cout << "Enter your string here: " << endl;
    getline(cin, str);
    for (auto c : str){
        if (!ispunct(c)){
            newstr += c;
        }
    }
    cout << newstr << endl;
    return 0;
}

