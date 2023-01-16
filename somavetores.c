/* 
 * Arquivo: somavetores.c
 * Data de criação: 12/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    int n, m, i;
    int *vetor1;
    int *vetor2;
    int *vetor3;
    printf("Digite o numero de elementos do primeiro e do segundo vetor: ");
    scanf("%d %d", &n, &m);
    if(n != m){
        printf("mensagem que nao pode somar vetores");
        return 0;
    }
    vetor1 = (int*) malloc(n*sizeof(int));
    vetor2 = (int*) malloc(m*sizeof(int));
    int imp = 1;
    for (i = 0; i < n; i++){
        vetor1[i] = imp;
        imp = imp + 2; 
    }
    int mult = 0;
    for (i = 0; i < m; i++){
        vetor2[i] = mult;
        mult = mult + 4;
    }
    for (i = 0; i < n; i++){
            vetor3[i] = vetor1[i] + vetor2[i];
    }
    printf("%d", vetor3[0]);
    for(i = 1; i < n; i++){
        printf(", %d", vetor3[i]);
    }
    free(vetor1);
    free(vetor2);
    free(vetor3);
    return 0; 
}