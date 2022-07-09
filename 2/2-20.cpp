#include <iostream>
//What doew the following program do?

int main(){
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;    // change the value of i, i = 42*42
    std::cout << i << std::endl;
}