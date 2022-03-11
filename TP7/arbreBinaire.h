#ifndef ARBRE_BINAIRE_H
#define ARBRE_BINAIRE_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef struct sommet *sommet;
typedef sommet arbreBinaire;
typedef char objet;

struct sommet
{
  objet info;
  sommet gauche, droit, pere;
};

sommet creerArbreBinaire(objet racine);
void detruireSommet(sommet s);
void* getValeur(sommet s);
void  setValeur(sommet s, objet o);
sommet filsGauche(sommet S);
sommet filsDroit(sommet S);
sommet pere(sommet S);
void ajouterFilsGauche(sommet s, objet o);
void ajouterFilsDroit(sommet s, objet o);
void supprimerFilsGauche(sommet s);
void supprimerFilsDroit(sommet s);

//nouvelles primitives 
void setFilsGauche(sommet s, sommet fg);
void setFilsDroit(sommet s, sommet fg);
void setPere(sommet s, sommet p);

#endif /* ARBRE_BINAIRE_H */
