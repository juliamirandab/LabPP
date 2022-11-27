/* 
 * Arquivo: impares.c
 * Data de criação: 24/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void){
    int a, b, i;
    printf("Digite a e b do intervalo [a,b], sendo a < b: ");
    scanf("%d %d", &a, &b);
   
    if (a < b){

        for(i = a; i <= b; i++){ 
            if (i%2 != 0){
                printf("%d ", i);

            }
        } 
    }
    return 0;
}
