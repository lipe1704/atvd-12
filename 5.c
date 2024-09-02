//5. Escreva um programa em C que contenha uma matriz quadrada de ordem 5. O programa deve apresentar
//um menu, com as seguintes opções:
// 1. Preencher a matriz com números aleatórios
// 2. Preencher a matriz manualmente
// 3. Apresentar a matriz
// 4. Trocar valores de duas linhas
// 5. Trocar valores de duas colunas
// 6. Trocar valores de uma linha pelos valores de uma coluna
// 7. Trocar valores de uma coluna pelos valores de uma linha
// 0. Encerrar programa
//Nas opções de troca, o programa deve solicitar ao usuário dois índices (de linhas/colunas) para fazer a
//substituição dos valores. O programa deve conter uma estrutura de caso para cada opção e uma sub-rotina
//(função ou procedimento) para executar cada uma das tarefas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void aleatorios (int matriz[5][5]){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            matriz[i][j]=rand () % 10;
        }
    }
}
void manual (int matriz[5][5]){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf ("Informe o valor [%i][%i] ", i, j);
            scanf ("%i", &matriz[i][j]);
        }
    }
}
void apresentar (int matriz[5][5]){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf ("%i ", matriz[i][j]);
        }
        printf ("\n");
    }
}
void trocar_duas_linhas (int matriz[5][5]){
    int l1, l2, temp;
    printf ("informe a linha 1 : ");
    scanf ("%i", &l1);
    printf ("informe a linha 2 :");
    scanf ("%i", &l2);
    for (int i=0; i<5; i++){
        temp=matriz[l1][i];
        matriz[l1][i]=matriz[l2][i];
        matriz[l2][i]=temp;
    }

}
void trocar_duas_colunas (int matriz[5][5]){
    int c1, c2, temp;
    printf ("informe a coluna 1 : ");
    scanf ("%i", &c1);
    printf ("informe a coluna 2 :");
    scanf ("%i", &c2);
    for (int i=0; i<5; i++){
        temp=matriz[i][c1];
        matriz[i][c1]=matriz[i][c2];
        matriz[i][c2]=temp;
    }
}
void trocar_linha_para_coluna (int matriz[5][5]){
    int linha, coluna;
    int temp[5];
    printf ("informe a linha : ");
    scanf ("%i", &linha);
    printf ("informe a coluna : ");
    scanf ("%i", &coluna);
    
    for (int i=0; i<5; i++){
            temp[i]=matriz[linha][i];
    }
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            matriz[i][coluna]=temp[i];
        }
    }
    
}
void trocar_coluna_para_linha (int matriz[5][5]){
    int temp[5];
    int linha, coluna;
    printf ("informe a coluna : ");
    scanf ("%i", &coluna);
    printf ("informe a linha : ");
    scanf ("%i", &linha);
    for (int i=0; i<5; i++){
            temp[i]=matriz[i][coluna];
    }
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            matriz[linha][i]=temp[i];
        }
    }
    
}


int main () {
    int mat[5][5];
    int a;

    srand (time(NULL));

    do {
        printf ("============================OPÇÕES============================\n"
                "1. Preencher a matriz com números aleatórios\n"
                "2. Preencher a matriz manualmente\n"
                "3. Apresentar a matriz\n"
                "4. Trocar valores de duas linhas\n"
                "5. Trocar valores de duas colunas\n"
                "6. Trocar valores de uma linha pelos valores de uma coluna\n"
                "7. Trocar valores de uma coluna pelos valores de uma linha\n"
                "0. Encerrar programa\n"
                "============================OPÇÕES============================\n");
        scanf ("%i", &a);
        switch (a){
            case 1:
                aleatorios(mat);
            break;
            case 2:
                manual(mat);
            break;
            case 3:
                apresentar(mat);
            break;
            case 4:
                trocar_duas_linhas(mat);
            break;
            case 5:
                trocar_duas_colunas(mat);
            break;
            case 6:
                trocar_linha_para_coluna(mat);
            break;
            case 7:
                trocar_coluna_para_linha(mat);
            break;
            case 0:
                printf ("Programa encerrado\n");
            break;
            default:
            printf ("número incorreto\n");
            break;
        }
    } while (a!=0);
    return 0;
}
