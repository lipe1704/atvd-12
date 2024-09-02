//2. Faça um programa que contenha uma matriz quadrada de ordem 4. O programa deve preencher os
//elementos da matriz com valores inteiros aleatórios. O programa também deve conter um vetor de 4
//elementos do tipo real. Cada elemento do vetor deve ser preenchido com o resultado da soma, diferença,
//produto e quociente das respectivas colunas da matriz.
//Exemplo:

//Matriz:  3 4 8 2
//         2 2 2 2
//         1 1 0 1
//         1 3 5 7

//Vetor:  7 -2 0 0.14
//Observação: tratar a divisão por zero */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void somatorio (int matriz[4][4] , float vetor[4] ){
    int soma=0;
    for (int i=0; i<4 ; i++){
        soma += matriz[i][0];
    }
    vetor[0]=soma;
}

void diferenca (int matriz[4][4], float vetor[4]){
    int menos;
    for (int i=0; i<4 ; i++){
        if (i==0){
            menos=matriz[i][1];
        }
        else{
                menos -= matriz[i][1];
        }
    }    
    vetor[1]=menos;
}

void produto (int matriz[4][4], float vetor[4]){
    int mult=1;
    for (int i=0; i<4; i++){
        mult*=matriz[i][2];
    }
    vetor[2]=mult;
}

void quociente (int matriz[4][4], float vetor[4]){
    float divi;
    for (int i=0; i<4 ; i++){
        if (i==0){
            divi=matriz[i][1];
        }
        else{
                divi /= matriz[i][1];
        }
    }
    vetor[3]=divi;   
}   
int main () {
    int mat[4][4];
    float vet[4];
    
    srand (time(NULL));
    
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            mat[i][j] = rand() % 10;     
            printf ("%i ", mat[i][j]);
        }
        printf ("\n");
    }
    somatorio(mat, vet);
    diferenca (mat, vet);
    produto (mat, vet);
    quociente (mat, vet);
    for (int i=0; i<3; i++){
        printf ("%.f ", vet[i]);
    }
    printf ("%.2f", vet[3]);
}
