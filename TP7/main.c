    #include "arbreBinaire.c"

int main(){

    arbreBinaire s = NULL;
    s = creerArbreBinaire('a');
    //ajouterFilsGauche(s, 'b');
    printf("%c\n", s->info);
    printf("pere : %p\n", s->pere);
    //printf("filsGauche : %c\n", s->gauche->info);
    //printf("filsDroit : %c\n", s->droit->info);

    return 0;
}