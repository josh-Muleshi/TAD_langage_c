#include "interfaceListeSC.c"
#include <string.h>

void afficherListe(listSC *l){
    debutListe(l);
    while (getCleListe(l) != NIL)
    {
        valeur(l);
        printf("%c", valeur(l));
        suivant(l);
    }
}

listSC tranStrToLSC(char *s){
    listSC l;
    creerListe(&l);
    int i;
    for (i = strlen(s)-1; i >= 0; i--)
    {
        char x = s[i];
        insereEnTete(&l, x);
    }
    return l;
}

listSC supOcc(char *s, char c){
    listSC r = tranStrToLSC(s);
    while (getCleListe(&r) != NIL)
    {
        curseur p = getCleListe(&r);
        suivant(&r);
        if(valeur(&r) == c){
            setCleListe(&r, p);
            supprimeApres(&r); 
        }
    }
    debutListe(&r);
    if (valeur(&r) == c)
    {
        supprimeEnTete(&r);
    }
    
    return r;
    
}