#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define T 100

typedef struct  object{
    char v;
    int suivant;
} Object;

typedef struct LSC{
    Object tab[T];
    int premierLibre;
    int posTete;
    int posCle;
} LSC;

