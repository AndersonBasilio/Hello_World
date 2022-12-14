#include <stdio.h>
#include <stdlib.h>


int main(){

int tamanho;
printf("Qual sera o tamanho do vetor? ");
scanf("%d", &tamanho);

float vetor[tamanho], soma, media;

int i;
for(i = 0; i < tamanho; i++){
    printf("Digite a nota do aluno: ");
    scanf("%f", &vetor[i]);
    
    soma = soma + vetor[i];
    media = soma / 3; 
}

for(i = 0; i < tamanho; i++){
    printf("Valor da nota %d: %.2f\n", i, vetor[i]);  
}

if(media >= 7){
    printf("A media das notas e %.2f", soma / 3);
    printf("\nAprovado! Parabens!!!");
}else{
    printf("A media das notas e %.2f", soma / 3);
    printf("\nReprovado! Estude mais...");
}


    return 0;
}