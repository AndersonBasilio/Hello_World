#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string.h>

int main(){
char palavra[20];
setbuf(stdin,0);


printf("Digite uma palavra: ");
fgets(palavra, 20, stdin);

palavra[strlen(palavra) - 1] = ' ';

printf("A palavra que voce digitou foi %s.\n\n", palavra);

    return 0;
}