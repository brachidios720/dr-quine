#include <stdio.h>
#include <stdlib.h>

/*
    Commentaire
*/
#define FILE_NAME "Grace_kid.c"
#define CODE "#include <stdio.h>%c#include <stdlib.h>%c%c/*%c   Commentaire%c*/%c#define FILE_NAME %cGrace_kid.c%c%c#define CODE %c%s%c%c#define FT() int main(){ FILE *f = fopen(FILE_NAME, %cw%c); if(!f) return 1; fprintf(f, CODE, 10,10,10,10,10,10,34,34,10,34,CODE,34,10,34,34,10,10,10); fclose(f); return 0; }%c%cFT()%c"
#define FT() int main(){ FILE *f = fopen(FILE_NAME, "w"); if(!f) return 1; fprintf(f, CODE, 10,10,10,10,10,10,34,34,10,34,CODE,34,10,34,34,10,10,10); fclose(f); return 0; }

FT()
