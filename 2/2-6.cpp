// What, if any, are the differences between the following definitions:

int main(){
    int month = 9, day = 7;    //OK
    int month = 09, day = 07;    //Error: the digit of octal integral literal should in range 0-7

    return 0;
}