/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

8) Fa�a um programa que calcule e mostre a �rea de um trap�zio.
Sabe-se que: A = ((base maior + base menor) * altura)/2 */

#include<stdio.h>
int main()
{
    float b_maior,b_menor,altura,area;

printf("AREA DE UM TRAPEZIO \n \n");

printf("Digite a base maior: ");
    scanf("%f",&b_maior);
printf("Digite a base menor: ");
    scanf("%f",&b_menor);
printf("Digite a altura: ");
    scanf("%f",&altura);

area=(b_maior+b_menor)*altura / 2;
printf("A area do trapezio e %.2f",area);

}
