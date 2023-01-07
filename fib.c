/* 
 * Arquivo: fib.c
 * Data de criação: 05/01/2023
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
int fibonacci(int n);
int main(void){
    int a, x;
    printf("Digite um numero: ");
    scanf("%d", &a);
    x = fibonacci(a);
    printf("%d", x);
    return 0;
}
int fibonacci(int n){
    if(n == 0){
        return 0;
    }if(n == 1 || n == 2){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
    
}