/* 
 * Arquivo: aleatorios.c
 * Data de criação: 22/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maximo(int * vetor, int n);
int minimo(int * vetor, int n);
int mediaf(int * vetor, int n);

int main(void){
    int n, min, max;
    double media = 0;
    printf("Quantos elementos tem o vetor? ");
    scanf("%d%*c", &n);
    int * vetor;
    vetor = (int *) malloc(n * sizeof(int));
    srand(n);
    for(int i = 0; i < n; i++){
        vetor[i] = rand() % n;
    }
    min = minimo(vetor, n);
    max = maximo(vetor, n);
    media = mediaf(vetor, n);
    printf("minimo: %d\nmaximo: %d\nmedia: %lg", min, max, (media/n));
    free(vetor);
    return 0;
}
int maximo(int * vetor, int n){
    int max = vetor[0];
    for(int i = 0; i < n; i++){
        if(vetor[i] > max){
            max = vetor[i];
        }
    }
    return max;
}
int minimo(int * vetor, int n){
    int min = vetor[0];
    for(int i = 0; i < n; i++){
        if(vetor[i] < min){
            min = vetor[i];
        }
    }
    return min;
}
int mediaf(int * vetor, int n){
    int med = vetor[0];
    for(int i = 0; i < n; i++){
        med = med + vetor[i];
    }
    return med;
}