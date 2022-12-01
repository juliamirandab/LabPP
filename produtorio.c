/* 
 * Arquivo: produtorio.c
 * Data de criação: 01/12/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
float multiplicacao(float * vetor, int tamanho);
int main(void) {
    int n;
    printf("Quantos elementos? ");
    scanf("%d", &n);
    float vetor[n]; 
    for(int i = 0; i < n; i++) {
        printf("Informe elemento %d: ", i+1);
        scanf("%f", vetor + i);
    }
    printf("%g ", vetor[0]);
    for(int i = 1; i < n; i++)
        printf("* %g ", vetor[i]);
    printf("= %g\n", multiplicacao(vetor, n));
    return 0;
}
float multiplicacao(float * vetor, int tamanho) {
    float s = 1;
    for(int i = 0; i < tamanho; i++) 
        s = s * vetor[i];
    return s;
}