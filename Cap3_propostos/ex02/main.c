/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

2) Fa�a um programa que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.*/

#include<stdio.h>
int main()
{
int n1,n2,n3,multiplicacao;

printf("MULTIPLICACAO DE TRES NUMEROS \n\n");

printf("Digite um numero: ");
    scanf("%d",&n1);
printf("Digite umnumero: ");
    scanf("%d",&n2);
printf("Digite umnumero: ");
    scanf("%d",&n3);

multiplicacao=n1*n2*n3;

printf("A soma dos dois numeros e: %d",multiplicacao);
}

