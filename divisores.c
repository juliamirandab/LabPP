/* 
 * Arquivo: divisores.c
 * Data de criação: 27/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void){
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("1");
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            printf(", %d", i);
        }
    }    
    return 0;
}