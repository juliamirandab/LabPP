/* 
 * Arquivo: primo.c
 * Data de criação: 26/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool ehPrimo(int n);

bool ehFeliz(int x);

int main(void){
    int n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    while(n != 0){
     
        if(ehPrimo(n) == 1 && ehFeliz(n) == 1){
            printf("%d", n);
            n = 0;
        }
        else{
            n = n - 1;
            if(n == 0){
                printf("%d***", n);
            }
        }
    }
    return 0;
}

bool ehPrimo(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if((n%1) == 0){
            return false;
        }
    }
    return true;
}

bool ehFeliz(int x){
    int digito;
    int soma;
    soma = 0;
    while (x > 0){
        digito = (x%10);
        soma = soma + pow(digito,2);
        x = x/10;
    }
    if(soma == 4){
        return false;
    }
    else if(soma != 1){
        return ehFeliz(soma);
    }
    else{
        return true;
    }
}