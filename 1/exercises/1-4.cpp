#include <iostream>

int main(){
    std::cout << "Enter two numbers:" << std::endl;
    int num1 = 0, num2 = 2;
    std::cin >> num1 >> num2;
    std::cout << num1 << " times " << num2 << " equal to " << num1 * num2 << std::endl;

    return 0;
}