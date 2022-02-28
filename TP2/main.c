#include "interfaceListeSC.c"

int main(){

    listSC liste;
    creerListe(&liste);
    printf("avant: %d\n", liste.prLibre);
    //rendreCelluleA(&liste, liste.cle);
    //printf("apres: %d\n", liste.cle);
    insereEnTete(&liste, 'G');
    insereEnTete(&liste, 'X');
    insereEnTete(&liste, 'Y');
    insereApres(&liste, 'w');
    insereEnTete(&liste, 'A');

    supprimeEnTete(&liste);
    
    printf("taille : %d\n", liste.taille);
    printf("premier : %d\n", liste.premier);
    printf("prLibre : %d\n", liste.prLibre);
    
    printf("val : %c\n", liste.tab[liste.premier].val);
    int i = liste.tab[liste.premier].idSuiv;
    printf("val : %c\n", liste.tab[i].val);
    printf("cle : %d\n", liste.cle);
    return  0;
}