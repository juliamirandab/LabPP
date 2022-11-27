/* 
 * Arquivo: dist.c
 * Data de criação: 24/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
#include <math.h>


int main(void){

    float xA, xB, yA, yB, dist;

    printf("Digite as coordenadas (x y) do ponto A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas (x y) do ponto B: ");
    scanf("%f %f", &xB, &yB);

    dist = sqrt (pow(xA -xB, 2.0)+pow(yA-yB, 2.0));
    printf("A distancia de A a B e: %g", dist);
    

    return 0;

}