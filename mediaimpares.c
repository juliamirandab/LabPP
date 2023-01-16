/* 
 * Arquivo: mediaimpares.c
 * Data de criação: 15/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <stdlib.h>
double media(int *v, int n);
int main(void){
    int *v;
    int n, s;
    printf("Quantos elementos tera o vetor? ");
    scanf("%d", &n);
    v = (int*) malloc(n*sizeof(int));
    printf("Qual elemento inicial? ");
    scanf("%d", &s);
    if((s)%(2)!=0){
        s--;
    }
    for(int i = 0; i < n; i++){
        v[i] = s + 1;
        s = s + 2;
    }
    double resultado = media(v,n);
    printf("Penultimo elemento: %d\n", v[n-2]);
    printf("Media: %lg", resultado);
    free(v);
    return 0;
}
double media(int *v, int n){
    int m = 0;
    for(int j = 0; j < n; j++){
        m = m + v[j];
    }
    m = m/n;
    return m;
}