/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

5) Fa�a um programa que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se
que este sofreu um desconto de 10%.*/

#include<stdio.h>
int main()
{
float preco,desconto,n_preco;

printf("CALCULO DE DESCONTO \n \n");

printf("Digite o valor do produto: ");
    scanf("%f",&preco);

desconto=preco * 0.1;
n_preco= preco - desconto;

printf("\n \n");
printf("O valor do produto com 10%% de desconto sera de %.2f reais",n_preco);


}
