/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

    5). Fa�a um programa quereceba o sal�rio de um funcion�rio,calculee mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>
int main()

{
float salario,n_salario;

printf("PROGRAMA PARA CALCULAR O NOVO SALARIO DE UM FUNCIONARIO. \n \n");
printf("Digite seu salario: ");
    scanf("%f",&salario);
    n_salario = (salario*1.25);

printf("Seu novo salario � de: %.2f",n_salario);
return 0;
}
