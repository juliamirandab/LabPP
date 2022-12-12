/* 
 * Arquivo: bin2dec.c
 * Data de criação: 11/12/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 1024
void getstr(char * str, long long int nchar);
int main(void) {
    char bin[N] = {'x','x','x','x','x'};
    printf("Entre com um numero binario: ");
    getstr(bin, N);
    long long int dec = 0, i = 0;
    long long int len = strlen(bin);

    while(len--){
        if(bin[len] == '0' || bin[len] == '1'){
            dec = dec + pow(2, i++) * (bin[len] - '0');
        }
    }
    printf("%llu", dec);

    return 0;
}    
void getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}