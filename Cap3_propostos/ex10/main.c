/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

10) Fa�a um programa que calcule e mostre a �rea de um quadrado S. abe-se que: A= lado * lado.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float lado,area;

printf("CALCULO DA AREA DE UM QUADRADO \n \n");

printf("Digite o valor do lado: ");
    scanf("%f",&lado);

area=pow(lado,2);

printf("A area do quadrado e de %.2f",area);
}
