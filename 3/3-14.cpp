/*
    Write a program to read a sequence of ints from cin and store those values in a vector.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    int n;
    cout << "Enter your ints here: " << endl;
    while(cin >> n){
        v1.push_back(n);
    }
    for(auto i : v1){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}