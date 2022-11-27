/* 
 * Arquivo: primo.c
 * Data de criação: 24/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n);

int main(void){
    int n;
    printf ("Entre com um numero: ");
    scanf ("%d", &n);
    printf ("O numero %d %seh primo\n", n, ehPrimo(n)? " " : "NÃO");
    return 0;
}

bool ehPrimo(int n){
    for (int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}