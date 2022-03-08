#include "pile.c"

int main(){
    Pile p;
    creerPile(&p);
    empiler(&p, 'a');
    empiler(&p, 'b');
    empiler(&p, 'k');
    depiler(&p);
    printf("val : %c\n", valeur(&p));
    printf("val : %c\n", p.tab[p.size].val);
    printf("taille : %d\n", p.size);
    detruirePile(&p);
    printf("taille : %d\n", p.size);
    return 0;
}
