/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

 8) Fa�a um programa que receba o valor de um dep�sito e o valor da taxa de juros, calcule e mostre o
valor do rendimento e o valor total depois do rendimento.*/

#include <stdio.h>
int main()

{
float deposito,juros,juros1,total,rend;
printf("Calculo de Juros bancarios \n \n");

    printf("Digite o valor de seu deposito: ");
        scanf("%f",&deposito);
    printf("Digite o valor da taxa de juros: ");
        scanf("%f", &juros);
    juros1=juros/100+1;
        rend=deposito*juros1;
    printf("O redimento sera de: %.2f",rend);
}
