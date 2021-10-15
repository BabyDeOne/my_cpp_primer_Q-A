#include <iostream>

int main(){
    int count = 20;
    while (count >= 0){
        std::cout << count << std::endl;
        -- count;
    }
    return 0;
}
