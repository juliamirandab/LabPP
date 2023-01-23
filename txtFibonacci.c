/* 
 * Arquivo: txtFibonacci.c
 * Data de criação: 22/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
#include <stdlib.h>
typedef
    long long unsigned int
lluint;

void fibonacci(lluint * vetor, int j);
int main(void){
    int N;
    lluint * vetor;
    vetor = (lluint *) malloc(N * sizeof(lluint));
    printf("Quantos elementos da sequencia Fibonacci deve ser impresso? ");
    scanf("%d%*c", &N);
    FILE * fib;
    fib = fopen ("fib.txt", "w");
    if(fib == NULL){
        printf("Arquivo nao abriu!");
        return 1;
    }
    else{
        int i;
        for(i = 0; i < N; i++){
            fibonacci(vetor, i);
            fprintf(fib, "%llu\n", vetor[i]);
            if(i == (N - 1)){
                printf("%llu\n", vetor[i]);
            }
        }
    }
    free(vetor);
    fclose(fib);
    return 0;
}
void fibonacci(lluint * vetor, int j){
    if (j == 0){vetor[j] = 0;}
    else if (j == 1){vetor[j] = 1;}
    else {vetor[j] = vetor[j - 1] + vetor[j - 2];}
}
