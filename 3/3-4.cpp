/*
    Write a program to read two strings and report whether the strings are equal. If not, report which of the 
    two is larger. Now, change the program to report whether the string have the same length, and if not, 
    report which is longer.
*/
#include <iostream>
#include <string>
using namespace std;

//test which string is larger
/*
int main(){
    string str1, str2;
    cout << "Enter string1 here: " << endl;
    cin >> str1;
    cout << "Enter string2 here: " << endl;
    cin >> str2;
    if (str1 == str2){
        cout << "String1 equal to string2" << endl;
    }else if (str1 > str2){
        cout << "String1 is larger" << endl;
    }else{
        cout << "String2 is larger" << endl;
    }
    return 0;
}
*/

//test wich string is longer
int main(){
    string str1, str2;
    cout << "Enter string1 here: " << endl;
    cin >> str1;
    cout << "Enter string2 here: " << endl;
    cin >> str2;
    if (str1.size() == str2.size()){
        cout << "String1 equal to string2" << endl;
    }else if (str1.size() > str2.size()){
        cout << "String1 is longer" << endl;
    }else{
        cout << "String2 is longer" << endl;
    }
    return 0;
}