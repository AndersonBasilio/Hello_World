#include <stdio.h>
#include <stdlib.h>

int main(){

    float num1, num2, resultado;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    resultado = num1 * num2;

    printf("Os numeros digitados foram: %.0f e %.0f.", num1, num2);
    printf("\nO resultado da multiplicacao %.0f x %.0f = %.0f.", num1, num2, resultado);




    return 0;
}