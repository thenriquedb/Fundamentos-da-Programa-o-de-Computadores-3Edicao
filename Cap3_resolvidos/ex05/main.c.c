/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

    5) Fa�a um programa quereceba o sal�rio de um funcion�rio,calculee mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.
*/

#include <stdio.h>
int main()

{
float salario,percentual,n_sal,aumento;

printf("Aumento de salario \n \n");

printf("Digite seu atual salario: ");
    scanf("%f",&salario);
printf("Digite o percentual de aumento: ");
    scanf("%f",&percentual);

printf("\n \n DADOS ATUALIZADOS \n\n");

percentual = percentual/100;
aumento = salario * percentual;
n_sal = salario + aumento;

printf("O seu salario teve um aumento de %.2f reais \n",aumento);
printf("Seu novo salario sera de %.2f reais \n",n_sal);

return 0;
}
