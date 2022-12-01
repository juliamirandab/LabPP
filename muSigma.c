/* 
 * Arquivo: muSigma.c
 * Data de criação: 01/12/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
#include <math.h>

float calculaMedia(float * vetor, int tamanho);
float calculaDesvio(float * vetor, int tamanho, float x);

int main(void){
    int n;
    printf("Quantos elementos? ");
    scanf("%d", &n);
    float vetor[n]; 
    for(int i = 0; i < n; i++) {
        printf("Informe elemento %d: ", i+1);
        scanf("%f", vetor + i);
    }
    float x = calculaMedia(vetor, n);
    printf("media: %g, desvio: %g", x, calculaDesvio(vetor, n, x));
    return 0;
}
float calculaMedia(float * vetor, int tamanho) {
    float soma = 0;
    float media;
    for(int i = 0; i < tamanho; i++) 
        soma = soma + vetor[i];
    media = soma / tamanho;
    return media;
}
float calculaDesvio(float * vetor, int tamanho, float x){
    float soma = 0;
    float desvio;
    for(int i = 0; i < tamanho; i++) 
        soma = soma + (pow(vetor[i] - x ,2));
    desvio = sqrt(soma / tamanho);
    return desvio;
}
