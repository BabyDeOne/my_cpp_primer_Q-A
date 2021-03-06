#include <string>
#include <iostream>

using namespace std;

int main(){
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
        << " seperated by spaces. Hit ENTER when finished: "
        << endl;
    string result;
    string::size_type n; //hold humbers form the input

    while( cin >> n){
        if ( n < hexdigits.size()){
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: " << result << endl;
}