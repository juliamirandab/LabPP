/* 
 * Arquivo: cadastro.c
 * Data de criação: 07/01/23
 * Autor: Júlia Miranda 
 */
#include <stdio.h>
typedef
    struct Nome{
        char nome[20];
        char sobrenome[20];
    }
Nome;
typedef
    struct Data{
        int dia, mes, ano;
    }
Data;
typedef
    struct Altura{
        int metro,centimetro;
    }
Altura;
typedef
    struct Peso{
        float kg;
    }
Peso;
const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};
int cm(int x);
int main(void){
    Nome nome;
    Data data;
    Altura altura;
    Peso peso;
    int n;
    printf("Cadastro para quantas pessoas? ");
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        printf("Digite seu nome, sua data de nascimento(DD/MM/YY), sua altura e seu peso: ");
        scanf("%s %s %d/%d/%d %d.%d %f",
        &nome.nome, &nome.sobrenome, &data.dia, &data.mes, &data.ano, &altura.metro, &altura.centimetro, &peso.kg);
        altura.centimetro = cm(altura.centimetro);
        printf("%s %s; %02d%s%04d; Altura %dm%d; %0.1fkg\n",
        nome.nome, nome.sobrenome, data.dia, strmes[data.mes], data.ano, altura.metro, altura.centimetro, peso.kg);
        
    }
   
    return 0;

}
int cm(int x){
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}
    