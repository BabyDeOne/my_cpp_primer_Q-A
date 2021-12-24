/*
    What doew the following program do? Is it valid? If not, why not?
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout << s[0] << endl;
    return 0;
}
/*Answer:  This program print out the first character of s. s is a empty string so this program return a null
    character "\0". 
*/