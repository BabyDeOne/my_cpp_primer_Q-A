#include <iostream>
#include <string>

int main(){
    std::string oldValue = "oldValue";
    std::string newValue = "newValue";
    std::string *pointer = &oldValue ;
    std::cout << *pointer << " "<< pointer <<  std::endl;
    
    //Write code to change the value of a pointer.
    pointer = &newValue;    //value in pointer is changed; pointer now points to newValue
    std::cout << *pointer << " "<< pointer << std::endl;
    
    //Write code to change the value to which the pointer points.
    *pointer = "look at the address";    //value in newValue is changed; pointer is unchanged
    std::cout << newValue << " "<< pointer << std::endl; 


}