/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

11. Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
o n�mero digitado ao quadrado;
b) o n�mero digitado ao cubo;
c) a raiz quadrada do n�mero digitado;
d) a raiz c�bica do n�mero digitado.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int numero,cubo,quadrado;
    float raiz_quad,raiz_cub;

    printf("                              CALCULO BASICOS                              \n\n\n\n");
    printf(" Digite um numero: ");
    scanf("%d",&numero);

    if (numero > 0);
    {
// Opera�oes
    quadrado=pow(numero,2);
    cubo=pow(numero,3);
    raiz_quad=sqrt(numero);
    raiz_cub=cbrt(numero);
printf("\n\n");
printf("CALCULOS:  \n");
    printf("O quadrado de %d e: %d \n",numero,quadrado);
    printf("O cubo de %d e: %d \n",numero,cubo);
    printf("A raiz quadrada de %d e: %.2f \n",numero,raiz_quad);
    printf("A raiz cubica de %d de: %.2f \n",numero,raiz_cub);




}
}
