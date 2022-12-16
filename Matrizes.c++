#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>


using namespace std;
int main(){

int matriz [2] [2], i, j;

matriz [0] [0] = 1;
matriz [0] [1] = 2;
matriz [1] [0] = 3;
matriz [1] [1] = 4;

//imprimindo valores na tela
for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
    
        //cout << "\ni = "<< i << " , j = " << j;
          cout << "\n" << matriz[i][j] << " ";
    
        
    }
}
    // lendo valores na tela
    printf("\nDigite 4 numeros para matriz 2 x 2: ");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           // scanf("%d", &matriz[i][j]);
           cin >> matriz[i][j]; //utilizando o C++
        }
    }
    printf("Matriz\n");
    //imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
        //cout << "\ni = "<< i << " , j = " << j;
          cout << matriz[i][j] << "  ";
    
        }
        cout << "\n";
    }
return 0;

}