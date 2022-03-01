#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef unsigned int nat;
typedef struct Cellule Cellule;
typedef Cellule *curseur;
struct Cellule{
    char val;
    curseur precedant;
    curseur suivant;
};

typedef struct ListDBChaine ListDBChaine;
typedef ListDBChaine *ListDC;
struct ListDBChaine{
    nat size;
    curseur premier;
    curseur cle;
    curseur dernier;
};

//PRIMITIVE DE CURSEUR
curseur creerCellule(char x);
char valeur(curseur c);

//PRIMITIVE D'ACCES DE LISTE_DC
bool listevide(ListDC l);
bool existeListe(ListDC l);
char valeurs(ListDC l);
curseur getCleListeDC(ListDC l);
bool estFinListeDC(ListDC l);
void finListeDC(ListDC l);
void debutListeDC(ListDC l);
void suivant(ListDC l);
void precedant(ListDC l);

//PRIMITIVE DE MODIFICATION DE LISTE_DC
ListDC creerListeDC();
void inserTete(ListDC l, char x);
void inserApres(ListDC l, char x);
void inserQueue(ListDC l, char x);
void supprimeTete(ListDC l);
void supprimeApres(ListDC l);
void supprimeQueue(ListDC l);