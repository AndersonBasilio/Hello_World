#include <stdio.h>
#include <stdlib.h>

int main(){
int opcao; 
float num1, num2;

printf("Digite dois numeros: ");
scanf("%f %f", &num1, &num2);


while(opcao < 1 || opcao > 4){
    printf("Escolha uma opcao: ");
    printf("\n1 - Multiplicao\n2 - Divisao\n3 - Adicao\n4 - Subtracao\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
    printf("1 - Multiplicacao: %.1f x %.1f = %.1f\n", num1, num2, num1 * num2);
        break;
    
    case 2:
        printf("Divisao: %.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
        break;
    case 3:
        printf("Adicao: %.1f / %.1f = %.1f\n", num1, num2, num1 + num2);
        break;

    case 4:
        printf("Subtracao: %.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
        break;

    default:
        printf("Opcao Invalida. Tente Novamente...\n");
        break;
    }
}

    return 0;
}