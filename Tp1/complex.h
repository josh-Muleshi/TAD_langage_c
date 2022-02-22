#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
//type abstrait complexe

typedef struct complex{
  float r; // real part
  float i; // imag part
} Tcomplex;

Tcomplex C_new (double r, double i);

Tcomplex C_add (Tcomplex a,  Tcomplex b);

Tcomplex C_mul (Tcomplex a,  Tcomplex b);

double  C_module (Tcomplex c);

bool C_compare (Tcomplex a, Tcomplex b);

/* Fonction d'affichage d'un nombre complexe */

void C_print(Tcomplex a);
