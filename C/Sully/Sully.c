#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void){

    int i = 5;

    int j = i - 1;

    char a[100];

    if(i >= 0){

    sprintf(a, "Sully_%d.c", i);

    char *s = "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdlib.h>%c%cint main(void){%c%c    int i = %d;%c%c    int j = i - 1;%c%c    char a[100];%c%c    if(i >= 0){%c%c    sprintf(a, %cSully_%cd.c%c, i);%c%c    char *s=%c%s%c;int fd = open(a, O_WRONLY| O_CREAT| O_TRUNC, 0644); if(fd == -1){perror(%copen%c); return 1;} dprintf(fd, s, 10,10,10,10,10,10,10,j,10,10,10,10,10,10,10,10,34,37,34,10,10,34,s,34,34,34,10,34,37,37,34,34,37,34);%c    sprintf(a, %cgcc -Wall -Werror -Wextra Sully_%cd.c -o Sully_%cd%c, i, i); system(a); sprintf(a, %c./Sully_%cd%c, i);execve(a, NULL, NULL);}}"; int fd = open(a, O_WRONLY| O_CREAT| O_TRUNC, 0644); if(fd == -1){perror("open"); return 1;} dprintf(fd, s, 10,10,10,10,10,10,10,j,10,10,10,10,10,10,10,10,34,37,34,10,10,34,s,34,34,34,10,34,37,37,34,34,37,34);
    sprintf(a, "gcc -Wall -Werror -Wextra Sully_%d.c -o Sully_%d", i, i); system(a); sprintf(a, "./Sully_%d", i);execve(a, NULL, NULL);}}

