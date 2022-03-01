#include "ListDBChainee.h"

//PRIMITIVE DE CURSEUR
curseur creerCellule(char x){
    curseur c = (curseur)malloc(sizeof(struct Cellule));
    if (c != NULL)
    {
        c->val = x;
        c->suivant = NULL;
        c->precedant = NULL;
        return c;
    }else
    {
        return NULL;
    }
}

char valeur(curseur c){
    return c->val;
}

//PRIMITIVE D'ACCES DE LISTE_DC
bool listevide(ListDC l){
    return l->size == 0;
}

char valeurs(ListDC l){
    if (l->cle != NULL)
    {
        return l->cle->val;
    }else {
        return ' ';
    }
}

curseur getCleListeDC(ListDC l){
    return l->cle;
}

//IMPLEMENTATION DE MODIFICATION DE LISTE_DC
ListDC creerListeDC(){
    ListDC l = (ListDC)malloc(sizeof(struct ListDBChaine));
    if (l != NULL)
    {
        l->size = 0;
        l->premier = NULL;
        l->cle = 0;
        l->dernier = NULL;
    }
    return l;
}

void inserTete(ListDC l, char x){
        if (l != NULL) /* On vérifie si notre liste a été allouée */
    {
        curseur c = malloc(sizeof *c); /* Création d'un nouveau node */
        if (c != NULL) /* On vérifie si le malloc n'a pas échoué */
        {
            c->val = x; /* On 'enregistre' notre donnée */
            c->suivant = NULL; /* On fait pointer p_next vers NULL */
            if (l->dernier == NULL) /* Cas où notre liste est vide (pointeur vers fin de liste à  NULL) */
            {
                c->precedant = NULL; /* On fait pointer p_prev vers NULL */
                l->premier = c; /* On fait pointer la tête de liste vers le nouvel élément */
                l->dernier = c; /* On fait pointer la fin de liste vers le nouvel élément */
            }
            else /* Cas où des éléments sont déjà présents dans notre liste */
            {
                l->dernier->suivant = c; /* On relie le dernier élément de la liste vers notre nouvel élément (début du chaînage) */
                c->precedant = l->dernier; /* On fait pointer p_prev vers le dernier élément de la liste */
                l->dernier = c; /* On fait pointer la fin de liste vers notre nouvel élément (fin du chaînage: 3 étapes) */
            }
            l->size++; /* Incrémentation de la taille de la liste */
        }
    }
     /*return l; on retourne notre nouvelle liste */
}