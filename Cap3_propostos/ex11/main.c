/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

11) Fa�a um programa que calcule e mostre a �rea de um losango. Sabe-se que: A= (diagonal maior * diagonal
menor)/2. */

#include <stdio.h>
#include <math.h>
int main()
{
float d_maior,d_menor,area;

printf("CALCULO DA AREA DO LOSANGO \n \n");

printf("Digite o valor da diagonal maior: ");
    scanf("%f",&d_maior);
printf("Digite o valor da diagonal menor: ");
    scanf("%f",&d_menor);

area=d_maior*d_menor / 2;
printf("\n");
printf("A area do losango e de %.2f",area);
}
