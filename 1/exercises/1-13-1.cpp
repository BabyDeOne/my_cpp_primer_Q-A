#include <iostream>

int main(){
    int sum = 0;
    for (int val = 50; val <= 100; ++val){
        sum += val;
        std::cout << "val: " << val << " "<< "sum: " << sum << std::endl;
    }
    return 0;
}