/* 
 * Arquivo: dec2bin.c
 * Data de criação: 11/12/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>

void bin(unsigned long int num);
int main(void){
    int num;
    printf("Digite um decimal de no maximo 64 bits: ");
    scanf("%llu", &num);
    bin(num);
 
    return 0;
}
void bin(unsigned long int num){
    if(num != 0){    
        bin(num/2);
        printf("%d", num % 2);
    }
}