/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

12)v Fa�a um programa que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule
e mostre a quantidade de sal�rios m�nimos que esse funcion�rio ganha. */

#include <stdio.h>
int main()
{
    float sal_min,sal_fun,quant;

printf("CALCULO DA QUANTIDADE DE SALARIOS MINIMO QUE UMA PESSOA RECEBE \n \n");

printf("Digite o valor do salario minimo: ");
    scanf("%f",&sal_min);
printf("Digite o valor do seu salario: ");
    scanf("%f",&sal_fun);

quant=sal_fun / sal_min;

printf("Voce recebe %.1f salarios minimos.",quant);
}
