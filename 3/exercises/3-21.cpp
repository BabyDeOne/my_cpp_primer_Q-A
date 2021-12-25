/*
    Redo the exercise 3-16 using iterators.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> v1, v2(10), v3(10,42), v4{10}, v5{10,42};
    vector<string> v6{10}, v7{10, "hi"};
    cout << "v1 has " << v1.size() << " elements" << endl;
    for (auto i = v1.begin(); i != v1.end(); ++i){
        cout << *i << endl;
    }
    cout << "v2 has " << v2.size() << " elements" << endl;
    for (auto i = v2.begin(); i != v2.end(); ++i){
        cout << *i << endl;
    }
    cout << "v3 has " << v3.size() << " elements" << endl;
    for (auto i = v3.begin(); i != v3.end(); ++i){
        cout << *i << endl;
    }
    cout << "v4 has " << v4.size() << " elements" << endl;
    for (auto i = v4.begin(); i != v4.end(); ++i){
        cout << *i << endl;
    }
    cout << "v5 has " << v5.size() << " elements" << endl;
    for (auto i = v5.begin(); i != v5.end(); ++i){
        cout << *i << endl;
    }
    cout << "v6 has " << v6.size() << " elements" << endl;
    for (auto i = v6.begin(); i != v6.end() && ! i -> empty(); ++i){
        cout << *i << endl;
    }
    cout << "v7 has " << v7.size() << " elements" << endl;
    for (auto i = v7.begin(); i != v7.end() && ! i -> empty(); ++i){
        cout << *i << endl;
    }
}