/* 
 * Arquivo:diferencas.c
 * Data de criação: 01/12/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
void maxMin(float * vetor, int tamanho);
int main(void){
    int n;
    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);
    float vetorA[n];
    float vetorB[n-1];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i);
        scanf("%f", &vetorA[i]);
    }
    for(int i = 0; i < n-1; i++){
        vetorB[i] = vetorA[i+1] - vetorA[i];
    }
    printf("%g", vetorB[0]);
    for(int i = 1; i < n-1; i++){
        printf(", %g", vetorB[i]);
    }
    maxMin(vetorB, n-1);
    return 0;
} 
void maxMin(float * vetor, int tamanho){
    float mi = vetor [0];
    float ma = vetor[0];
    for(int j = 0; j < tamanho; j++){
        if( vetor[j] < mi)
            mi = vetor[j];
        if(vetor[j] > ma)
            ma = vetor[j];
    }
    printf("\nmin = %g e max = %g", mi, ma);

}
