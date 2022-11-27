/* 
 * Arquivo: areaTriRet.c
 * Data de criação: 24/11/22
 * Autor: Júlia Miranda 
 */

#include <stdio.h>
#include <math.h>

int main(void){
    float xA, xB, yA, yB, distAC, distBC, area;

    printf("Digite as coordenadas (x y) do ponto A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas (x y) do ponto B: ");
    scanf("%f %f", &xB, &yB);

    float xC = xB;
    float yC = yA;

    distAC = sqrt (pow(xA - xC, 2.0)+pow(yA-yC, 2.0));
    distBC = sqrt (pow(xB - xC, 2.0)+pow(yB-yC, 2.0));

    area= (distAC*distBC)/2;

    printf("%g", area);
    
    return 0;
}