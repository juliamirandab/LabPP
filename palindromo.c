/* 
 * Arquivo: palindromo.c
 * Data de criação: 11/12/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <string.h>
#define N 400

int getstr(char * str, int nchar);
void upper(char * str);
void copiaInvertida(char * str, int nchar, int i);

int main(void){
    char frase[N];
    printf("Entre com uma mensagem: ");
    int i = getstr(frase,N);
    upper(frase);
    copiaInvertida(frase, N, i);
    return 0;
}
int getstr(char * str, int nchar){
    char c;
    int i;
    int j = 0;
    for(i = 0; i < nchar; i++){
        c = getchar();
        if(c != '\n'){
            str[i] = c;
            j++;
        }else{
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar){
        str[nchar - 1] = '\0';
        while((c = getchar()) != '\n' && c != EOF);
    }
    return j;
}
void upper(char * str){
    long long int l = 0;
    while(str[l]){
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -='a' - 'A';
        l++;    
    }
}
void copiaInvertida(char * str, int nchar, int i){
    int x, y;
    int a = 1;
    for(int k = 0; k < i; k++){
        if((str[k] >= 'A') && (str[k] <= 'Z')){
            a++;
        }
    }
    char vet[600];
    char vett[600];
    for(int k = 0; k < 600; k++){
        vet[k] = '\0';
        vett[k] = '\0';
    }
    for(int k = 0, y = 0; k < i; k++, y++){
        if((str[k] >= 'A') && (str[k] <= 'Z')){
            vet[y] = str[k];
            if(strlen(vet) == a){
                break;
            }
        }else{
            y--;
        }
    }
    for(int j = strlen(vet) - 1, x = 0; j >= 0; j--,x++){
        vett[x] = vet[j];
    }
    int b = 0;
    for(int j = 0; j < a; j++){
        if(vett[j] != vet[j]){
            printf("Palindromo: Falso");
            b = 1;
            break;
        }
    }
    if(b == 0){
        printf("Palindromo: Verdadeiro");
    }
}