#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
    vector<string> svec;
    string word;
    while( cin >> word){
        svec.push_back(word);
    }
    for(auto &a : svec ){
        a = toupper(a);
        cout << a ;
    }
    cout << endl;
}