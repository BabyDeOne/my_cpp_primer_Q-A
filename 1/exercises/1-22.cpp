#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item totalBooks, book;
    if(std::cin >> totalBooks){
      while (std::cin >> book){
      totalBooks += book;
      }
    }
    std::cout << totalBooks << std::endl;
    return 0;
}


