#include <iostream> 
// Is the following program legal? If so, what values are printed?
// i = 100, sum = 45

int main(){
    int i =100, sum = 0;
    for (int i = 0; i != 10; i++)
        sum += i;
    std::cout << i << " " << sum << std::endl;
}