/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

23) Fa�a um programa que receba a medida de dois �ngulos de um tri�ngulo, calcule e mostre a medida doterceiro �ngulo. Sabe-se que a soma dos �ngulos de um
tri�ngulo � 180 graus. */

#include <stdio.h>
int main()
{
    float ang1,ang2,ang3;
    printf("CALCULO DO TERCEIRO ANGULO DE UM TRIANGULO \n\n");
    printf("Digite o valor do primeiro angulo: ");
        scanf("%f",&ang1);
    printf("Digite o valor do segundo angulo: ");
        scanf("%f",&ang2);
ang3= 180 -(ang1+ang2);

printf("O terceiro angulo vale %.1f graus",ang3);
}
