/*
 * Arquivo: somaGauss
 * Data de criação: 03/11/22
 * Autor: Julia Miranda
 */

#include <stdio.h>

int main (void) {
    int n;
    
    
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    if(n > 1){
        int i=1;
        int soma=0;
        for(i = 1; i <= n; i++){
            soma = soma + i;
        }
        printf("%d", soma);
    }
    else{
        printf("Seu numero nao e valido!");
    }
        
    return 0;
}