#include <stdio.h>
#include <stdlib.h>

int main(){

char palavra [10];

printf("Digite uma palavra: ");
setbuf(stdin, 0);
fgets(palavra, 10, stdin);
palavra[strlen(palavra)-1] = '\0';

printf("A palavra eh %s", palavra);




return 0;
}