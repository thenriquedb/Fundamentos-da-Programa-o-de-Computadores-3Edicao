/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

    5) 7. Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre seu sal�rio a receber, sabendo-se que o funcion�rio tem gratifica��o de R$ 50 e paga imposto de 10%
*/
#include <stdio.h>
int main()

{
float sal,imposto,s_final;
printf(" CALCULO DE SALARIO \n \n");

printf("Digite seu salario: ");
scanf("%f",&sal);

imposto= sal *0.1;
s_final = sal-imposto+50;

printf("Salario a receber: %.2f reais \n",s_final);
return 0;
}
