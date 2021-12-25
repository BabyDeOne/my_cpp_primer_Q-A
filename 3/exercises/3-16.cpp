/*
    Write a program to print the size and contents of the vectors from exercise 3-13. Check whether your answers to 
    that exercise where correct.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> v1, v2(10), v3(10,42), v4{10}, v5{10,42};
    vector<string> v6{10}, v7{10, "hi"};
    cout << v1.size() << endl;
    for (auto a : v1){
        cout << a << " ";
    }
    cout << endl;
    cout << v2.size() << endl;
    for (auto a : v2){
        cout << a << " ";
    }
    cout << endl;
    cout << v3.size() << endl;
    for (auto a : v3){
        cout << a << " ";
    }
    cout << endl;
    cout << v4.size() << endl;
    for (auto a : v4){
        cout << a << " ";
    }
    cout << endl;
    cout << v5.size() << endl;
    for (auto a : v5){
        cout << a << " ";
    }
    cout << endl;
    cout << v6.size() << endl;
    for (auto a : v6){
        cout << a << " ";
    }
    cout << endl;
    cout << v7.size() << endl;
    for (auto a : v7){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}