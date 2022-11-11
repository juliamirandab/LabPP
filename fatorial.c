/* 
 * Arquivo: fatorial.c
 * Data de criação: 04/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main (void) {
    int n;
    
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    if(n > 1){
        int i=1;
        long long int fat=1;
        for(i = 1; i <= n; i++){
            fat = fat * i;
        }
        printf("%d! = %lld", n, fat);
    }
    else{
        printf("Seu numero nao e valido!");
    }
        
    return 0;
}