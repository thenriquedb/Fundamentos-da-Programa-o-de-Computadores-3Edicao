/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

13) Fa�a um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: a) a idade dessa pessoa; b) quantos anos ela ter� em 2050.  */

#include <stdio.h>
int main()

{
    int idade,ano,idade_50,i_futuro;

printf("CALCULO DE IDADE EM 2050 \n \n");

printf("Digite sua idade atual: ");
    scanf("%d",&idade);
printf("Digite o ano atual: ");
    scanf("%d",&ano);

    idade_50=2050-ano;
    i_futuro=idade_50+idade;

printf("Sua idade em 2050 sera de %d anos",i_futuro);



}
