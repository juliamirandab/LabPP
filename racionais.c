/* 
 * Arquivo: racionais.c
 * Data de criação: 22/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
typedef
    struct Racional{
        int num, den;
    }
Racional;

int mdc(int a, int b);
int mod(int a);
int main(void){
    Racional Q;
    Racional P;
    Racional Soma;
    Racional Sub;
    Racional Mult;
    Racional Div;
    int c;
    printf("Digite dois numeros racionais: ");
    scanf("%d %d %d %d", &Q.num, &Q.den, &P.num, &P.den);
    if((Q.den) < 0){
        Q.den = Q.den * (-1);
        Q.num = Q.num * (-1);
    }
    if((P.den) < 0){
        P.den = P.den * (-1);
        P.num = P.num * (-1);
    }
    c = Q.num;
    Q.num = Q.num / mdc(mod(Q.num), mod(Q.den));
    Q.den = Q.den / mdc(mod(c), mod(Q.den));
    c = P.num;
    P.num = P.num / mdc(mod(P.num), P.den);
    P.den = P.den / mdc(mod(c), P.den);
    Soma.num = ((Q.num)*(P.den))+((P.num)*(Q.den));
    Soma.den = (Q.den)*(P.den);
    Sub.num = ((Q.num)*(P.den))-((P.num)*(Q.den));
    Sub.den = (Q.den)*(P.den);
    Mult.num = (Q.num)*(P.num);
    Mult.den = (Q.den)*(P.den);
    Div.num = (Q.num)*(P.den);
    Div.den = (Q.den)*(P.num);
    c = Soma.num;
    Soma.num = Soma.num / mdc(mod(Soma.num), Soma.den);
    Soma.den = Soma.den / mdc(mod(c), Soma.den);
    c = Sub.num;
    Sub.num = Sub.num / mdc(mod(Sub.num), Sub.den);
    Sub.den = Sub.den / mdc(mod(c), Sub.den);
    c = Mult.num;
    Mult.num = Mult.num / mdc(mod(Mult.num), Mult.den);
    Mult.den = Mult.den / mdc(mod(c), Mult.den);
    c = Div.num;
    Div.num = Div.num / mdc(mod(Div.num), mod(Div.den));
    Div.den = Div.den / mdc(mod(c), mod(Div.den));
    if (Div.den < 0){
        Div.den = Div.den * (-1);
        Div.num = Div.num * (-1);
    }
    printf("%d/%d %d/%d %d/%d %d/%d %d/%d %d/%d", Q.num, Q.den, P.num, P.den,
    Soma.num, Soma.den, Sub.num, Sub.den, Mult.num, Mult.den, Div.num, Div.den);
    return 0;
}
int mdc(int a, int b){
    if(b == 0){
        return a;
    }else{
        mdc(b,(a % b));
    }
}
int mod(int a){
    if(a < 0){
        return (a * (-1));
    }else{
        return a;
    }
}