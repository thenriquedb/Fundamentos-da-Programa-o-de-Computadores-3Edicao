/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

8) Fa�a um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas. */

#include<stdio.h>
int main()
{
    float kg,grama;
printf("Digite seu peso em quilos: ");
    scanf("%f",&kg);

grama=kg*1000;

printf("Seu peso em gramas e de %.2f gramas.",grama);
}
