/* 
 * Arquivo: contaCaracteres.c
 * Data de criação: 11/12/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#define N 600
int getstr(char * str, long long int nchar);
void conta(char * str, int nchar);

int main(void){
    char frase[N];
    printf("Entre com ums mensagem: ");
    for(int i = 0; i < 600; i++){
        frase[i] = '\0';
    }
    int j = getstr(frase, N);
    conta(frase, j);
    return 0;
}

int getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}
void conta(char * str, int nchar){
    int l = 0, d = 0, o = 0;
    for(int i = 0; i < nchar; i++){
        if(((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z'))){
            l++;
        }else if((str[i] >= '0') && (str[i] <='9')){
            d++;
        }else{
            o++;
        }
    }
    printf("letras: %d digitos %d outros: %d", l, d, o);
}