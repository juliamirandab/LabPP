/* 
 * Arquivo: aproxpi.c
 * Data de criação: 05/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <math.h>
double aproximaPi(int n);
int main(void){
    int n;
    double x;
    printf("Digite o limite superior da serie: ");
    scanf("%d", &n);
    x = aproximaPi(n);
    printf("%lf\n", x);
    return 0;
}
double aproximaPi(int n){
    if (n == 0) 
        return 4.0;
    return (aproximaPi(n - 1) + (4 * ((pow(-1, n))/((2*n) + 1))));
}