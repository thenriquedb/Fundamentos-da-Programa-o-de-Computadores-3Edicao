/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

7) Fa�a um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. */

#include<stdio.h>
int main()
{
    float peso,gorda,magra;

printf("CALCULO DE AUMENTO E REDUCAO DE PESO \n \n");

printf("Digite seu peso: ");
    scanf("%f",&peso);

gorda=peso*1.15;
magra=peso - (peso*0.2);

printf("\n \n");
printf("Se voce engordar 15%% seu novo peso sera de %.2f kg \n",gorda);
printf("Se vvoce emagrecer 20%% seu novo peso sera de %.2f kg",magra);
return 0;
}
