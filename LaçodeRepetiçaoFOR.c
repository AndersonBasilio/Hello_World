#include <stdio.h>
#include <stdlib.h>

void fazerBorda(){
    printf("=====================================\n");
}

int main(){
 
int cont, num;
printf("Digite um numero: ");
scanf("%d", &num);
fazerBorda();
for(cont = 1; cont <= 10; cont++){
    printf("%d x %d = %d\n", num, cont, num * cont);
}
fazerBorda();


    return 0;
}