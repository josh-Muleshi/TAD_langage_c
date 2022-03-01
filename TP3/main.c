#include "ListDBChainee.c"

int main(){

    curseur c;
    ListDC l;

    creerCellule('a');
    inserTete(l, 'a');
    //creerListeDC();
    printf("Size : %d\n", l->size);
    printf("val : %c\n", l->premier->val);
    return 0; 
}

