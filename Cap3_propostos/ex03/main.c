/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

3) Fa�a um programa que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo
segundo. Sabe-se que o segundo n�mero n�o pode ser zero, portanto, n�o � necess�rio se preocupar
com valida��es.*/

#include<stdio.h>
int main()

{
    float n1,n2,div;
printf("DIVIS�O POR 2 NUMEROS \n\n");

printf("Digite um numero: ");
    scanf("%f",&n1);
printf("Digite um numero diferente de 0: ");
    scanf("%f",&n2);

div=n1/n2;

printf("A divis�o de %.2f por %.2f � %.2f",n1,n2,div);
}
