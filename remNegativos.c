/* 
 * Arquivo: minMax.c
 * Data de criação: 01/12/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
void removeNeg(int * vetor, int tamanho);
int main(void){
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    removeNeg(vetor, n);
    return 0;
} 
void removeNeg(int * vetor, int tamanho){
    int aux = 0;
    for(int i = 0; i < tamanho; i++){
        if (vetor[i] >=  0)
            printf("%d, ", vetor[i]);
        else{
            aux++;
        }
    }
    if( aux == tamanho)
        printf("vazio");
    
}