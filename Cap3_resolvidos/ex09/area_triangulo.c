/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

 8) 9. Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea= (base * altura)/2.*/

#include <stdio.h>
int main()

{
    float base,altura,area;
    printf("CALCULO DA AREA DO TRIANGULO \n \n");

    printf("Digite a medida do base do tri�ngulo: ");
        scanf("%f",&base);
    printf("Digite a medida da altura: ");
        scanf("%f",&altura);

    area=(base*altura)/2;

    printf("A area do triangulo e de: %.2f",area);

}
