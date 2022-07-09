

int main(){
    int i = 0;
    double* dp = &i;  // type don't match
    int *ip = i;  // "int" cannot be used to initialize an entity of type "int *"
    int *p = &i;
}