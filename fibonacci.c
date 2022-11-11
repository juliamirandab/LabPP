/* 
 * Arquivo: fibonacci.c
 * Data de criação: 04/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>

int main(void){
    int n, a, b, c, i;

    printf("Digite a posicao do maximo termo que voce deseja na sequencia: ");
    scanf("%d", &n);
 
    a = 0;
    b = 1; 
    if(n == 1)
        printf("%d, ", 0);
    if (n > 1){
        printf("%d, %d, ", 0, 1);

        for(i = 1; i <= n-2; i++){
            c = a + b;
            a = b;
            b = c;
            printf("%d, ", c);
        }
    }
       
   
    printf("...");

    return 0;
}
