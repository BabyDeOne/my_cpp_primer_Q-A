/*
    Repeat the 3-14 program but read strings this time
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> vec1;
    string str;
    cout << "Enther your strings here: " << endl;
    while(cin >> str){
        vec1.push_back(str);
    }
    for (auto c : vec1){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}