#include <iostream>

int reused = 42; //global scop

int main(){
    int unique = 0; //block scope

    //output 1: use global reused prints 42, 0
    std::cout << reused << " " << unique << std::endl;

    int reused = 0; // local reused

    //output 2: use local reused prints 0, 0
    std::cout << reused << " " << unique << std::endl;

    //output 3: explicitly requests the global reused prints 42, 0
    std::cout << ::reused << " " << unique << std::endl;
}