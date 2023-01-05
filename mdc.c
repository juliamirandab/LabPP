/* 
 * Arquivo: mdc.c
 * Data de criação: 05/01/2022
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
int mdc(int a, int b);
int main(void){
    printf("Digite dois numeros: ");
    int a, b, x;
    scanf("%d %d", &a, &b);
    x = mdc(a, b);
    printf("%d", x);
    return 0;
}

int mdc(int a, int b){
    if (b == 0){
        return a;
    } else{
        return mdc(b, a%b);
    }
}