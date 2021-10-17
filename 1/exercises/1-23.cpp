#include <iostream>
#include "/mnt/c/cpp/cppprimer/1/Sales_item.h"


int main(){
    Sales_item currentIsbn, anotherIsbn;
    if (std::cin >> currentIsbn){
        int count = 1;
        while(std::cin >> anotherIsbn){
            if(anotherIsbn.isbn() == currentIsbn.isbn()){
                ++count;
            }
            else{
                std::cout << currentIsbn.isbn() << " occurs " << count << " times" << std::endl;
                currentIsbn = anotherIsbn;
                count = 1;
            }
        }
    std::cout << currentIsbn.isbn() << " occurs " << count << " times" << std::endl;
    }
    return 0;
}

