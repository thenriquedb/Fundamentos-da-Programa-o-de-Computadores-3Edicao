/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

1) Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo
segundo.*/

#include<stdio.h>
int main()
{
int n1,n2,soma;

printf("SOMA DE DOIS NUMEROS \n\n");
printf("Digite um numero: ");
    scanf("%d",&n1);
printf("Digite umnumero: ");
    scanf("%d",&n2);

soma=n1+n2;

printf("A soma dos dois numeros e: %d",soma);
}
