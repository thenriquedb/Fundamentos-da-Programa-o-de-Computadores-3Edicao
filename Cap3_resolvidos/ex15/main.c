/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

14) O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do
distribuidore dos impostos aplicados ao pre�o def�brica. Fa�a um programa quereceba o pre�o de f�- brica de um ve�culo, o percentual delucro do distribuidor e o percentual de impostos, calculee mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o pre�o final do ve�culo. */

#include <stdio.h>
int main()

{
    float p_fabrica,per_l,per_i,total,lucro,imposto;

printf("CALCULO DE LUCRO E IMPOSTOS DE UM CARRO \n \n");

printf("Digite o valor de fabrica: ");
    scanf("%f",&p_fabrica);
printf("Digite o percentual de lucro: ");
    scanf("%f",&per_l);
printf("Digite o percentual de impostos: ");
    scanf("%f",&per_i);

printf("\n \n");
// Calculos
    lucro= p_fabrica * (per_l /100);
    imposto= p_fabrica * (per_i /100);
    total= p_fabrica+imposto+lucro;

printf("O lucro do consumidor sera de %.2f reais \n",lucro);
printf("O unposto cobrado sera de %.2f reais \n",imposto);
printf("O valor total do veiculo sera de %.2f reais \n",total);

}
