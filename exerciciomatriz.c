
#include <stdio.h>
#include <stdlib.h>


int main(){
    
   float matriz[2][2], aux1, aux2;

    printf("Digite um valor para [0][0]: ");
    scanf("%f", &matriz[0][0]);
    
    printf("Digite um valor para [0][1]: ");
    scanf("%f", &matriz[0][1]);

    printf("Digite um valor para [1][0]: ");
    scanf("%f", &matriz[1][0]);

    printf("Digite um valor para [1][1]: ");
    scanf("%f",&matriz[1][1]);

    aux1 = matriz[0][0];
    aux2 = matriz[0][1];

    printf("\n[%.1f]  [%.1f]", matriz[0][0], matriz[0][1]);
    printf("\n[%.1f]  [%.1f]", matriz[1][0], matriz[1][1]);

    printf("\n\nValores da matriz invertidos...");
    printf("\n[%.1f] [%.1f]", matriz[1][0], matriz[1][1]);
    printf("\n[%.1f] [%.1f]", aux1, aux2);



return 0;
}