/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

23) Fa�a um programa que receba um n�mero real, encontre e mostre:
a) a parte inteira desse n�mero;
b) a parte fracion�ria desse n�mero;
c) o arredondamento desse n�mero. */

#include <stdio.h>
#include <math.h>
int main()

{
float numero,inteira,fracao,arred;

printf("Digite um numero real: ");
    scanf("%f%*c",&numero);

 	printf("Parte Inteira : %d \n",(int) numero);
   	printf("Parte Decimal : %f", numero - ((int)numero));
}
