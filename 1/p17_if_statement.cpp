#include <iostream>

int main(){
    int currentValue = 0, value = 0;

    if(std::cin >> currentValue){
        int count = 1;
        while(std::cin >> value){
            if(value == currentValue){
                ++count;
            }else{
                std::cout << currentValue << " occurs " << count << " times " << std::endl;
                currentValue = value;
                count = 1;
            }
        }
    std::cout << currentValue << " occurs " << count << " times " << std::endl;    
    }
    return 0;
}