#include "tas.c"

int main(){
    TasMin t;
    creerTas(&t, 'D');
    entasser(&t, 'C');
    entasser(&t, 'B');
    entasser(&t, 'A');
    entasser(&t, 'G');
    entasser(&t, 'F');
    entasser(&t, 'E');

    supprimer(&t);
    supprimer(&t);
    
    printf("%c\n\n", valeur(&t));
    printf("fils gauche : %c\n", filsG(&t, RACINE));
    printf("fils Droit : %c\n", filsD(&t, RACINE));
    printf("fils gauche : %c\n", filsG(&t, RACINE * 2));
    printf("fils Droit : %c\n\n", filsD(&t, RACINE * 2));

    return 0;
}