//3. Escreva um programa que contenha um vetor de 10 elementos de qualquer tipo de dado. O programa deve
//possuir um menu com as seguintes opções:
// 1. Preencher o vetor com valores aleatórios
// 2. Apresentar o vetor
// 3. Inverter valores
// 0. Encerrar programa
//O programa deve conter uma estrutura de caso para cada opção e uma sub-rotina (função ou procedimento)
//para executar cada uma das tarefas. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher (int vet[10]){
    for (int i=0; i<10; i++){
        vet[i] = rand () % 10;
    }
}

void apresentar (int vet[10]){
    for (int i=0; i<10; i++){
        printf ("%i ", vet[i]);
    }
    printf ("\n");
}

void inverter (int vet[10]){
    int temp, fim=9;
    for (int i=0; i<10/2; i++){
        temp = vet[i];
        vet[i] = vet[fim];
        vet[fim] = temp;
        fim--;
    }
}
int main () {
    
    srand (time(NULL));
    
    int vet[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a;
    do {
        printf ("====================MENU====================\n"
                "1 - Preencher o vetor com valores aleatórios\n"
                "2 - Apresentar o vetor\n"
                "3 - Inverter valores\n"
                "0 - Encerrar programa\n"
                "============================================\n"
                "informe um número : ");
        scanf ("%i", &a);        
        
        switch (a){
            case 1:
                preencher (vet);
            break;
            case 2:
                apresentar (vet);
            break;
            case 3:
                inverter (vet);
        }
    }while (a!=0);
    printf ("Programa encerrado");
}
