#include <stdio.h>
#include <stdlib.h>


int main(){
    
   int matriz[2][2], i, j, aux1, aux2;

        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                printf("Digite o valor para [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
                for(i = 0; i < 2; i++){
                    for(j = 0; j < 2; j++){
                        printf("[%d] ", matriz[i][j]);
                    }
                    printf("\n");
                }

                    printf("\nInvertendo valores da Matriz...\n");

                    aux1 = matriz[0][0];
                    aux2 = matriz[0][1];

                    matriz[0][0] = matriz[1][0];
                    matriz[0][1] = matriz[1][1];
                    matriz[1][0] = aux1;
                    matriz[1][1] = aux2;


                     for(i = 0; i < 2; i++){
                     for(j = 0; j < 2; j++){
                        printf("[%d] ", matriz[i][j]);
                    }
                    printf("\n");
              }



return 0;
}