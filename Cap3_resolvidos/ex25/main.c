/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

25) Fa�a um programa que receba o custo de um espet�culo teatral e o pre�o do convite desse espet�culo.
Esse programa dever� calcular e mostrar a quantidade de convites que devem ser vendidos para que, pelo menos, o custo do espet�culo seja alcan�ado.*/
#include <stdio.h>
int main()

{
float quantidade,custo,convite;
printf("PRORGAMA PARA CALCULAR A QUANTIDADE DE CONVITES A SEREM VENDIDOS PARA COBRIR O CUSTO DE UMA PE�A DE TEATRO \n \n");

printf("Digite o custo total de produ��o: ");
        scanf("%f",&custo);
printf("Digite o valor do convite: ");
    scanf("%f",&convite);

// Calculos
quantidade=custo/convite;

printf("Sera necessario vender no minimo %.0f convites para cobrir o custo de producao do teatro.",quantidade);
}
