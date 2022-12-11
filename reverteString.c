/* 
 * Arquivo: reverteString.c
 * Data de criação: 11/12/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#define N 1024

void getstr(char * str, long long int nchar);
void upper(char * str);
void reverter(char * str, long long int nchar);

int main(void){
    char s[N] = {'x','x','x','x','x'};
    printf("Digite uma mensagem: ");
    getstr(s, N);
    upper(s);
    reverter(s,N);
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
void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}
void reverter(char * str, long long int nchar){
    long long int i = nchar - 1;
    for(i;i >= 0;i--){
        printf("%c", str[i]);
    }
}