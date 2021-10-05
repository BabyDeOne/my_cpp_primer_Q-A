#include <iostream>

int main(){
    std::cout << "Please enter two numbers: " << std::endl;
    int number_1 = 0, number_2 = 0, input1 = 0, input2 = 0;
    std::cin >> input1 >> input2;
    if (input1 > input2){
        number_1 = input1;
        number_2 = input2;
    }else{
        number_1 = input2;
        number_2 = input1;
    }
    while (number_1 >= number_2){
        std::cout << number_2 << std::endl;
        ++number_2;
    }
    return 0;
}