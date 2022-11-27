/* 
 * Arquivo: impares.c
 * Data de criação: 27/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void){
    int n0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n0);
    int soma = n0;

    while (n0 >= 1){
        if(n0 %2 == 0){
            n0 = n0/2;
            soma = soma + n0;
        }
        else{
            n0 = (n0*3) + 1;
            soma = soma + n0;
        }
    }

    printf("%d", soma);
    return 0;
}


