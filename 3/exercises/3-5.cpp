/*
    Write a program to reas strings from the standard input, concatenating whiat is read int one large string. 
    Print the concatenated string. Next, change the program to separete adjacent input strings by a space.
*/
#include <iostream>
#include <string>
using namespace std;

//print out a large string.
/*
int main(){
    string s1, s2;
    cout << "Enter two string here: " << endl;
    cin >> s1 >> s2;
    cout << s1 << s2 << endl;

}
*/

//print out space-separeted string
int main(){
    string s1, s2;
    cout << "Enter two string here: " << endl;
    cin >> s1 >> s2;
    cout << s1 <<" " << s2 << endl;

}