/* 
 * Arquivo: minMax.c
 * Data de criação: 01/12/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
void maxMin(int * vetor, int tamanho);
int main(void){
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    maxMin(vetor, n);
    return 0;
}

void maxMin(int * vetor, int tamanho){
    int mi = vetor [0];
    int ma = vetor[0];
    for(int j = 0; j < tamanho; j++){
        if( vetor[j] < mi)
            mi = vetor[j];
        if(vetor[j] > ma)
            ma = vetor[j];

    }
    for(int i = 0; i < tamanho; i++){
        printf("%d", vetor[i]);
        if(vetor[i] == mi)
            printf("<");
        if(vetor[i] == ma)
            printf(">");
        printf(" ");
    }
    printf("\n");

}
