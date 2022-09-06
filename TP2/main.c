#include "utilitaire.c"

int main(){

    listSC liste;
    creerListe(&liste);
    printf("avant: %d\n", liste.prLibre);
    //rendreCelluleA(&liste, liste.cle);
    //printf("apres: %d\n", liste.cle);
    insereApres(&liste, 'D');
    insereApres(&liste, 'Y');
    insereEnTete(&liste, 'A');
    insereApres(&liste, 'M');

    suivant(&liste);

    insereApres(&liste, 'B');
    insereEnTete(&liste, 'C');
    insereEnTete(&liste, 'B');
    
    supprimeApres(&liste);
    suivant(&liste);
    suivant(&liste);
    suivant(&liste);
    supprimeApres(&liste);

    //afficherListe(&liste);
    //printf("\n\n");

    /*listSC b = tranStrToLSC("mamam");
    afficherListe(&b);
    printf("\n\n");

    listSC a = supOcc("mamam", 'a');
    afficherListe(&a);
    printf("\n\n");*/

    //supprimeEnTete(&liste);
    
    printf("taille : %d\n", liste.taille);
    printf("premier : %d\n", liste.premier);
    printf("prLibre : %d\n", liste.prLibre);
    printf("cle : %d\n", liste.cle);
    //int i = liste.tab[liste.premier].val;
    printf("val : %c\n", liste.tab[liste.premier].val);
    
    /*printf("val : %c\n", liste.tab[liste.premier].val);
    int i = liste.tab[liste.premier].idSuiv;
    printf("val : %c\n", liste.tab[i].val);
    printf("cle : %d\n", liste.cle);*/
    return  0;
}