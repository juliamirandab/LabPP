/* 
 * Arquivo: somaDivisores.c
 * Data de criação: 11/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void){
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if(n > 0){
        int i=1;
        int somaD = 0;

        for(i = 1; i <= n; i++){
            if(n % i == 0){
                somaD = somaD + i;
            }    
        }
        printf("%d", somaD);
    }

    else{
        printf("Seu numero nao e valido!");  
    }

    return 0;
}