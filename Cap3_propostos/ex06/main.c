/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

6) Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um programa
que receba o sal�rio fixo do funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e seu
sal�rio final. */

#include<stdio.h>
int main()

{
    float sal,vendas,comissao,n_sal;

printf("CALCULO DE COMISSAO \n \n");

printf("Digite seu salario: ");
    scanf("%f",&sal);
printf("Digite o valor total de suas vendas: ");
    scanf("%f",&vendas);

    comissao=vendas * 0.04;
    n_sal=sal+comissao;

printf("\n Dados sobre salario \n \n");

printf("Voce recebera %.2f reais de comissao. \n",comissao);
printf("Seu salario total sera de %.2f reais",n_sal);
}
