/*
    MUTEBA MULESHI Josue
    PUNGU WA MUPENDA Adalbert
    NSAMBA LUKUSA Ruth
*/

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define TAILLEMaX  15
#define NIL -1

typedef int curseur ;
typedef struct cellule
{
    char val;
    curseur suivant;
}Cellule;

typedef struct File
{
    int size;
    Cellule tab[TAILLEMaX];
    curseur premier;
    curseur dernier;
}File;

char valeur(File *f);
bool fileVide(File *f);
bool filePleine(File *f);

void creerFile(File *f);
void enfiler(File *f, char v);
void defiler(File *f);
void detruireFile(File *f);