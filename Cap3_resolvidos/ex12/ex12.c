/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

Fa�a um programa que receba dois n�meros maiores que zero, calcule e mostre um elevado ao outro. */

#include <stdio.h>
#include <math.h>
int main()
{

int n1,n2,potencia;

    printf("Digite um numero: ");
        scanf("%d",&n1);
    printf("Digite um numero: ");
        scanf("%d",&n2);

    potencia=pow(n1,n2);

    printf("O resultado de %d elevado a %d e: %d",n1,2,potencia);
}
