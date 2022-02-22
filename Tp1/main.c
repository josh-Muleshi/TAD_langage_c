#include "complex.c"

int main(){
    Tcomplex x;
    x = C_new(3.4, 5.6);
    C_print(x);
    return 0;
}