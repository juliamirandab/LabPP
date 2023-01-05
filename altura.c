/* 
 * Arquivo: altura.c
 * Data de criação: 05/01/22
 * Autor: Júlia Miranda 
 */
#include <stdio.h>

typedef
    struct Comprimento{
        int metros, centimetros;
    }
Comprimento;
int cm(int x);
int main(void){
    Comprimento altura;
    printf("Entre com sua altura em metros: ");
    scanf("%d.%d", &altura.metros, &altura.centimetros);
    altura.centimetros = cm(altura.centimetros);
    printf("Altura %dm%d\n", altura.metros, altura.centimetros);
    return 0;
}
int cm(int x) {
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}
    