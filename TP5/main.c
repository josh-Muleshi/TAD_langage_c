#include "tas.c"

int main(){
    TasMin t;
    creerTas(&t, '2');
    entasser(&t, '5');
    entasser(&t, '7');
    entasser(&t, '9');
    entasser(&t, '3');
    printf("%c\n\n", valeur(&t));
    printf("fils gauche : %c\n", filsG(&t, RACINE));
    printf("fils Droit : %c\n", filsD(&t, RACINE));
    printf("fils gauche : %c\n", filsG(&t, RACINE * 2));
    printf("fils Droit : %c\n\n", filsD(&t, RACINE * 2));
    entasser(&t, '8');
    entasser(&t, '4');
    entasser(&t, '1');
    entasser(&t, '6');

    //supprimer(&t);
    //supprimer(&t);
    
    printf("%c\n\n", valeur(&t));
    printf("fils gauche : %c\n", filsG(&t, RACINE));
    printf("fils Droit : %c\n", filsD(&t, RACINE));
    printf("fils gauche : %c\n", filsG(&t, RACINE * 2));
    printf("fils Droit : %c\n\n", filsD(&t, RACINE * 2));

    return 0;
}