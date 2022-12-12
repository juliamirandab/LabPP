/* 
 * Arquivo: palindromo.c
 * Data de criação: 11/12/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#define N 1024

void getstr(char * str, long long int nchar);
char lower(char * str);
long long int len(char * str);

int main(void){
    char frase[N] = {'x','x','x','x','x'};
    printf("Entre com uma msg: ");
    getstr(frase, N);
    char aux[N];
    int j, dif;
    for (int i = 0; i < len(frase); i++){
        if(frase[i] != '-' && frase[i] != ',' && frase[i] != ' ' && frase[i] != '*' && frase[i] != ':' && frase[i] != '"' && frase[i] != '.'){
            aux[j++] = lower(frase[i]);
        }
    }
    aux[j] = '\n';
    int x = len(aux);
    x--;
    for(int i = 0; i < len(aux); i++){
        if(aux[i] != aux[x])
            dif++;
        x--;
    }
    if(dif == 0){
        printf("Palindromo: Verdadeiro");
    }else{
        printf("Palindromo: Falso");
    }

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
char lower(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'A' && str[l] <= 'Z')
            str[l] -= 'A' - 'a';
        l++;
    }
}
long long int len(char * str) {
    long long int l = 0;
    while(str[l]) l++;
    return l;
}