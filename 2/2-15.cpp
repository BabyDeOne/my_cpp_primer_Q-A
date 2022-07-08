

int main(){
    int ival = 1.01;
    int &rval1 = 1.01;  //invalid, initial value of reference to non-const must be an lvalue
    int &rval2 = ival;
    int &rval3;  //reference variable "rval3" requires an initializer
}