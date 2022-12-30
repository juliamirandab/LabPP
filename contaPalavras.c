/* 
 * Arquivo: contaPalavras.c
 * Data de criação: 11/12/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <string.h>
#define N 600
int getstr(char * str, long long int nchar);
void contaPalavras(char * str, int nchar);

int main(void){
    char frase[N];
    printf("Entre com uma mensagem: ");
    for(int i = 0; i < 600; i++){
        frase[i] = '\0';
    }
    int j = getstr(frase, N);
    contaPalavras(frase, j);
    return 0;
}
int getstr(char * str, long long int nchar){
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}
void contaPalavras(char * str, int nchar){
    int aux = 0;
    for(int i = 0; i < nchar; i++){
        while(((str[i] >= 'a') && (str[i] <= 'z')) || 
            ((str[i] >= 'A') && (str[i] <= 'Z')) || 
            ((str[i] >= '0') && (str[i] <= '9')) || 
            (str[i] == '-')){
            i++;
            continue;
        }
        if((str[i] == ' ') && (((str[i + 1] >= 'a') && (str[i + 1] <= 'z')) || 
            ((str[i + 1] >= 'A') && (str[i + 1] <= 'Z')) || 
            ((str[i + 1] >= '0') && (str[i + 1] <= '9')) || 
            (str[i + 1] == '-'))){
            aux++;
            i++;
        } 
    }
    if(aux != 0){
        aux++;
    }
    printf("%d", aux);
}
