/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

 15) Jo�o recebeu seu sal�rio e precisa pagar duas contas atrasadas. Em raz�o do atraso, ele dever� pagar
multa de 2% sobre cada conta. Fa�a um programa que calcule e mostre quanto restar� do sal�rio de Jo�o */

#include <stdio.h>
int main()

{
    float sal,resto,conta1,conta2,juros;
printf("CALCULO DE SALARIO \n \n");
printf("Digite seu salario: ");
    scanf("%f",&sal);
printf("Digite o valor da conta 1: ");
    scanf("%f",&conta1);
printf("Digite o valor da conta 2: ");
    scanf("%f",&conta2);

juros=(conta1 * 1.02) + (conta2 * 1.02) ;
resto=sal-juros;

printf("Restara %.2f reais de seu salario.",resto);

}
