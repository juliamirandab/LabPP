/* 
 * Arquivo: primo.c
 * Data de criação: 26/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void){
    int a, b;
    
    printf("Digite a e b do intervalo [a,b], sendo a < b: ");
    scanf("%d %d", &a, &b);

    int i, aux, j;
    int soma = 0;


        for(i = a; i <= b; i++){
            aux = 1;
            for(j = 2; j < i; j++){
                if((i%j) == 0){
                    aux = 0;
                }
            }

        if(aux == 1){
            soma = soma + i;
        }

        }    
    if (a = 1){
        printf("%d", soma - 1);
    }
    else{
        printf("%d", soma);
    }
    

        
    
    return 0;
}



