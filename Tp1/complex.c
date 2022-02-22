#include "complex.h"


Tcomplex C_new (double r, double i){
    Tcomplex c;
    c.r = r;
    c.i = r;
    return c;
}

Tcomplex C_add (Tcomplex a,  Tcomplex b){
    Tcomplex c;
    c.r = a.r + b.r;
    c.i = a.i + b.i;
    return c;
}

Tcomplex C_mul (Tcomplex a,  Tcomplex b){
    Tcomplex c;
    c.r = (a.r * b.r) - (a.i * b.i);
    c.i = (a.i * b.r) + (a.r * b.i);
    return c;
}

double  C_module (Tcomplex c){
    return sqrt(pow(c.r, 2) * pow(c.i, 2));
}

bool C_compare (Tcomplex a, Tcomplex b){
    bool comp;
    comp = (a.i == b.i) && (a.r == b.r);
    return comp;
}

void C_print(Tcomplex a){
    printf("(r=%.1f, i=%.1f)\n", a.r, a.i);
}