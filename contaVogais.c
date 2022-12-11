/* 
 * Arquivo: contaVogais.c
 * Data de criação: 11/12/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#define N 1024

void getstr(char * str, long long int nchar);
void contaVogal(char * str, long long int nchar);

int main(void){
    char s[N] = {'x','x','x','x','x'};
    printf("Digite uma palavra: ");
    getstr(s, N);
    contaVogal(s,N);
  
    return 0;
}
void getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) 
        while ((c = getchar()) != '\n' && c != EOF);
}

void contaVogal(char * str, long long int nchar){
    int aux = 0;
    for (long long int j = 0; j < nchar; j++){
        if(str[j] == 'a' || str[j] == 'A' || str[j] == 'e' || str[j] == 'E' || str[j] == 'i' || str[j] == 'I' || str[j] == 'o' || str[j] == 'O' || str[j] == 'u' || str[j] == 'U')
            aux++;
    }
    printf("%d", aux);
}





