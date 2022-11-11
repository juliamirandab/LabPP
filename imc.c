/* 
 * Arquivo: imc.c
 * Data de criação: 04/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void){
    float altura, imc;
    float peso;

    printf("Qual seu peso, em kg, e sua altura, em m? ");
    scanf("%f %f\n", &peso, &altura);
    printf("%f %f\n", peso, altura);

    imc = peso/(altura * altura);
    printf("%.2f\n", imc);





    // printf("Para um peso de 60,0kg e uma altura de 1,60m, temos um IMC = 23,44 que equivale a Peso normal. %.2f", imc);

    




    return 0;
}