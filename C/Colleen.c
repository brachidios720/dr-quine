#include <stdio.h>

/*
   Commentaire hors main
*/

void print_code() {
    // Affiche le code source avec printf
    char *src = "#include <stdio.h>%c%c/*%c   Commentaire hors main%c*/%c%cvoid print_code() {%c    // Affiche le code source avec printf%c    char *src = %c%s%c;%c    printf(src, 10,10,10,10,10,10,10,10,34,src,34,10,10,10,10,10,10,10,10);%c}%c%cint main() {%c    // Commentaire dans main%c    print_code();%c    return 0;%c}";
    printf(src, 10,10,10,10,10,10,10,10,34,src,34,10,10,10,10,10,10,10,10);
}

int main() {
    // Commentaire dans main
    print_code();
    return 0;
}
