/* 
 * Arquivo: somavetores.c
 * Data de criação: 12/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int soma(int * vetor1, int N1, int * vetor2, int N2, int * resultado);
int main(void){
    int n, m;
    int *vetor1;
    int *vetor2;
    int *vetor3;
    printf("Digite o numero de elementos do primeiro e do segundo vetor: ");
    scanf("%d%*c %d%*c", &n, &m);
    vetor1 = (int *) malloc(n*sizeof(int));
    vetor2 = (int *) malloc(m*sizeof(int));
    if (soma(*vetor1, n, *vetor2, m, *vetor3) == 0){
        printf("mensagem que não pode somar vetores");
    }else{
        printf("%d", vetor3[0]);
        for(int i = 1; i<n; i++){
            printf(", %d", vetor3[i]);
        }
    }
    free(vetor1);
    free(vetor2);
    free(vetor3);
    return 0; 
}

int soma(int * vetor1, int N1, int * vetor2, int N2, int * resultado){
    int imp = 1;
    for (int i = 1; i <= N1; i++){
        vetor1[i] = imp;
        imp = imp + 2; 
    }
    int mult = 0;
    for (int i = 1; i <= N2; i++){
        vetor2[i] = mult;
        mult = mult + 4;
    }
    if (N1 != N2){
        return 0;
    }else{
        for (int i = 0; i < N1; i++){
            resultado[i] = vetor1[i] + vetor2[i];
        }
        return 1; 
    }
    



}