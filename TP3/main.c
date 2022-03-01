#include "ListDBChainee.c"

int main(){

    curseur c = creerCellule('a');
    ListDC l = creerListeDC();

    
    inserTete(l, 'b');
    inserApres(l, 'a');
    inserTete(l, 'c');
    inserApres(l, 'd');
    inserApres(l, 'r');
    //creerListeDC();
    printf("val : %c\n", c->val);
    printf("premier : %c\n", l->premier->val);
    printf("suivant : %c\n", l->premier->suivant->val);
    printf("dernier : %c\n", l->dernier->val);
    printf("size : %d\n", l->size);
    return 0; 
}

