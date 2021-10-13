#include <iostream>
#include "/mnt/c/cpp/cppprimer/1/Sales_item.h"

/* int main(){
    Sales_item item, book;
    while (std::cin >> item){
        book += item;
    }
    std::cout << book << std::endl;
    return 0;
}
*/

int main() {
  Sales_item total, item;
  if (std::cin >> total) {
    while (std::cin >> item)
      total += item;
    std::cout << total << std::endl;
  }

  return 0;
}