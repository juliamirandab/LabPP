/* 
 * Arquivo: fatorial.c
 * Data de criação: 04/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main (void) {
    int n, i, fat;
    
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    if(n > 1){
        i = 1;
        fat = 1;

        while(i <= n){
            fat = fat * i;
            i = i + 1;
        }
        printf("%d! = %d \n", n, fat);
    }
    else{
        printf("Seu numero nao e valido!");
    }
        
    return 0;
}