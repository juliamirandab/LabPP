/* 
 * Arquivo: cosTaylor.c
 * Data de criação: 29/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <math.h>
#ifdef M_PI
    #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875
int fatorial(int i);
int main(void){
    int n, i;
    float x, cos;
    printf("Digite um numero n: ");
    scanf("%d", &n);
    printf("Digite um numero x: ");
    scanf("%f", &x);
    x = x * M_PI;
    for (i = 0; i <= n; i++){
        cos = cos + ((pow(-1,i)) * (((pow(x,(2 * i))))/(fatorial(i))));
    }
    printf("%.5f", cos);
    return 0;
}
int fatorial(int i){
    int a, b, res;
    res = 1;
    a = 2 * i;
    b = 1;
    while(b <= a){
        res = (res * b);
        b = b + 1;
    }
    return res;
}