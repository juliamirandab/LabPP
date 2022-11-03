/* 
 * Arquivo: aritmInt.c
 * Data de criação: 03/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void) {
    int a, b;
    printf("Entre com dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d \n", a, b, a + b);
    printf("%d - %d = %d \n", a, b, a-b);
    printf("%d * %d = %d \n", a, b, a*b);
    printf("%d / %d = %d \n", a, b, a/b);
    printf("%d %% %d = %d \n", a, b, a%b);

    return 0;
}