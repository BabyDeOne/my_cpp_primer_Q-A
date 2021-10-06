#include <iostream>

int main(){
    std::cout << "Please enter two numbers: " << std::endl;
    int bigNumber = 0, smallNumber = 0, input1 = 0, input2 = 0;
    std::cin >> input1 >> input2;
    if (input1 > input2){
        bigNumber = input1;
        smallNumber = input2;
    }else{
        bigNumber = input2;
        smallNumber = input1;
    }
    while (bigNumber >= smallNumber){
        std::cout << smallNumber << std::endl;
        ++smallNumber;
    }
    return 0;
}