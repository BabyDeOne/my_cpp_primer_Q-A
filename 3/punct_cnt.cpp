#include <string>
#include <iostream>

using namespace std;

int main(){
    string s ("Hello World!!!");
    decltype(s.size()) punct_cnt = 0;
    //string::size_type punct_cnt = 0;

    for ( auto c : s){
        if( ispunct(c) ){
            ++punct_cnt;
        }
    }
    cout << punct_cnt << " punctiation characters in " << s << endl;
}