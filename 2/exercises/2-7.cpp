#include <iostream>

// What values do these literals represent? What type does each have?
int main(){
    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    //character string literal containing two octal escape sequences
    std::cout << 3.14e1L << std::endl;
    //floating-point literal, type is 'long double'
    //std::cout << 1024f << std::endl;   
    //floating-point literal, type is 'float'
    std::cout << 3.14L << std::endl;
    //floating-point literal, type is 'long double'
}