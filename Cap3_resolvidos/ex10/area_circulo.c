/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

10. Fa�a um programa que calcule e mostre a �rea de um c�rculo. Sabe-se que: �rea = pi* R2. */

#include <stdio.h>
int main()

{
    float pi=3.14,raio,area;
    printf("CALCULO DA AREA DE UM CIRCULO \n \n");

    printf("Digite o valor do raio da circufer�ncia: ");
        scanf("%f",&raio);
    area=pi*raio*raio;
    printf("A area do circulo �: %.2f",area);
    return 0;
}
