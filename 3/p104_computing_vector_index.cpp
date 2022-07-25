#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<unsigned> scores(11, 0);
    unsigned grade;
    while (cin >> grade){
        if( grade <= 100){
            ++scores[grade/10];
        }
    }
    for( auto a : scores){
        cout << a << " ";
    }
    cout << endl;
}