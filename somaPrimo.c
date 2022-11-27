/* 
 * Arquivo: primo.c
 * Data de criação: 26/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void){
    int n, a, b;
    int soma = 0;
    printf("Digite a e b do intervalo [a,b], sendo a < b: ");
    scanf("%d %d", &a, &b);

    if (a < b){
        for(n = a; n <= b; n++){
            for(int i = 2; i < n; i++){
                soma = soma + n;
            }
        }
    }
    printf("%d", soma);
    return 0;
}



