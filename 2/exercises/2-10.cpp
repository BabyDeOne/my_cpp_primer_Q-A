
#include <string>
//What are the initial values, if any of each of the following variables?

std::string global_str;  // default initialized as an empty string, it defined outside any function body
int global_int;  //default initialized to 0
int main(){
    int local_int;  // uninitialized, it is a built-in type and it difined inside a funciton
    std::string local_str;  //default initialized as an empty string (class difined)
}