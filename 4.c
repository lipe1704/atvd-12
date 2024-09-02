//4. Faça programa que gere valores aleatórios para uma matriz 3 x 6 com valores inteiros. O programa deve
//apresentar um menu, oferecendo as seguintes opções para o usuário:
// 1. Apresentar a matriz
// 2. Mostrar a soma de todos os elementos das colunas ímpares.
// 3. Mostrar a média aritmética dos elementos da segunda e quarta colunas.
// 4. Substituir os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
// 0. Encerrar programa 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gerador_matriz (int matriz[3][6]){
    for (int i=0; i<3; i++){
        for (int j=0; j<6; j++){
            matriz[i][j] = rand() % 10;
        }
    }
}
 
void apresentar_matriz (int matriz[3][6]){
    printf ("-----------\n");
    for (int i=0; i<3; i++){
         for (int j=0; j<6; j++){
            printf ("%i ", matriz[i][j]);
        }
        printf ("\n");
    }
    printf ("-----------\n");
}
 
void soma_impar (int matriz[3][6]){
    int soma=0;
    printf ("-----------\n");
    for (int j=1; j<6; j+=2){
        for (int i=0; i<3; i++){
            soma+=matriz[i][j];
        }
    }
    printf ("%i\n", soma);
    printf ("-----------\n");
}

void media_aritmetica (int matriz[3][6]){
    int soma=0;
    float media;
    soma=matriz[0][2]+matriz[1][2]+matriz[2][2]+matriz[0][4]+matriz[1][4]+matriz[2][4];
    media=soma/6.0;
    printf ("-----------\n");
    printf ("%.2f\n", media);
    printf ("-----------\n");
}

substituir (int matriz[3][6]){
    int temp;
    temp=matriz[0][1]+matriz[1][1]+matriz[2][1]+matriz[0][2]+matriz[1][2]+matriz[2][2];
    matriz[0][5]=temp;
    matriz[1][5]=temp;
    matriz[2][5]=temp;
}
int main () {
    int mat[3][6];
    int a;
    srand (time(NULL));
    gerador_matriz(mat);
    do {
        printf ("======================================opções======================================\n"
                "1. Apresentar a matriz\n"
                "2. Mostrar a soma de todos os elementos das colunas ímpares.\n"
                "3. Mostrar a média aritmética dos elementos da segunda e quarta colunas.\n"
                "4. Substituir os valores da quinta coluna pela soma dos valores das colunas 1 e 2.\n"
                "0. Encerrar programa\n"
                "==================================================================================\n");
                scanf ("%i", &a);
                switch (a){
                    case 1:
                        apresentar_matriz (mat);
                    break;
                    case 2:
                        soma_impar (mat);
                    break;
                    case 3:
                        media_aritmetica (mat);
                    break;
                    case 4:
                        substituir (mat);
                    break;
                    case 0:
                        printf ("Programa encerrado");
                    break;    
                    default:
                        printf ("Erro");
                    break;
                }
    } while (a!=0);
 }
