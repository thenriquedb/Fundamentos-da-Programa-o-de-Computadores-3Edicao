/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

    5)Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber, sabendo-se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% tam- b�m sobre o sal�rio base.
*/
#include <stdio.h>
int main()

{
float sal,bonus,imposto,s_final;

printf("CALCULO DE GRATIFICA��O E IMPOSTOS SOBRE O SALARIO DE UM FUNCIONARIO \n \n");

printf("Digite seu salario: ");
    scanf("%f",&sal);

bonus = sal*1.05;
imposto = sal*7/100 ;
s_final = sal+bonus-imposto;

printf("\n\n DADOS ATUALIZADOS \n\n");

printf("Voce receber� %.2f reais de gratifica��o \n",bonus);
printf("Voce pagara %.2f reais de impostos \n",imposto);
printf("Seu salario final sera de %.2f reais \n",s_final);
}
