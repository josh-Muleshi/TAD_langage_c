#include "file.c"

int main(){
    File f;
    creerFile(&f);
    enfiler(&f, 'a');
    enfiler(&f, 'c');
    enfiler(&f, 'd');
    enfiler(&f, 'b');
    defiler(&f);
    defiler(&f);
    enfiler(&f, 'b');
    
    printf("val : %c\n", valeur(&f));
    printf("taille : %d\n", f.size);

    return 0;
}