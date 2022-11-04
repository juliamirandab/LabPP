/*
 * Arquivo: somaGauss
 * Data de criação: 03/11/22
 * Autor: Julia Miranda
 */

#include <stdio.h>

int main (void) {
    int n, i, soma;
    
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    if(n > 1){
        i = 1;
        soma = 0;

        while(i <= n){
            soma = soma + i;
            i = i + 1;
        }
        printf("%d \n", soma);
    }
    else{
        printf("Seu numero nao e valido!");
    }
        
    return 0;
}