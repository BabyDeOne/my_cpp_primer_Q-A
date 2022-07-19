#include <string>
#include <vector>
#include <iostream>

using namespace std;

//how many elements are there in each of the following vectors?
//what are the values of the elements?
int main(){
    vector<int> v1;
    cout << v1.size() << " elements in v1, and they are: " << endl;
    for( auto i : v1 ){
        cout << i << " ";
    }
    cout << "\n";
    vector<int> v2 (10);
    cout << v2.size() << " elements in v2, and they are: " << endl;
    for( auto i : v2 ){
        cout << i << " ";
    }
    cout << "\n";
    vector<int> v3(10, 42);
    cout << v3.size() << " elements in v3, and they are: " << endl;
    for( auto i : v3 ){
        cout << i << " ";
    }
    cout << "\n";
    vector<int> v4 {10};
    cout << v4.size() << " elements in v4, and they are: " << endl;
    for( auto i : v4 ){
        cout << i << " ";
    }
    cout << "\n";
    vector<int> v5 {10, 42};
    cout << v5.size() << " elements in v5, and they are: " << endl;
    for( auto i : v5 ){
        cout << i << " ";
    }
    cout << "\n";
    vector<string> v6 {10};
    cout << v6.size() << " elements in v6, and they are: " << endl;
    for( auto i : v6 ){
        cout << i << " ";
    }
    cout << "\n";
    vector<string> v7 {10, "hi"};
    cout << v7.size() << " elements in v7, and they are: " << endl;
    for( auto i : v7 ){
        cout << i << " ";
    }
}