/* 
 * Arquivo: quaisDiv.c
 * Data de criação: 01/12/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

void identifica_div(int * vetor, int tamanho, int referencia);

int main(void){
    int n, ref;
    printf("Quantos elementos? ");
    scanf("%d",&n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Informe o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Escolha o número de referencia: ");
    scanf("%d", &ref);
    identifica_div(vetor, n, ref);
    return 0;
}

void identifica_div(int * vetor, int tamanho, int referencia){
    for(int i = 0; i < tamanho; i++){
        printf("%d", vetor[i]);
        if(referencia % vetor[i] == 0){
            printf("#");
        printf(" ");
        }
    }
    printf("\n");

}