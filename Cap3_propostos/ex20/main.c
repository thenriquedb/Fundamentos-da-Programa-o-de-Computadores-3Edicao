/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

20) Fa�a um programa que receba a medida do �ngulo formado por uma escada apoiada no ch�o e a dis-
t�ncia em que a escada est� da parede, calcule e mostre a medida da escada para que se possa alcan�ar
sua ponta  */

#include <stdio.h>
int main()

{
    float angulo,distancia,escada,radiano;

printf("CALCULO DA ALTURA DA PAREDE \n \n");

printf("Digite a distancia: ");
    scanf("%f",&distancia);
printf("Digite o angulo em que a escada est� apoiada: ");
    scanf("%f",&angulo);

// Calculos
radiano=angulo*3.14 / 180;
escada=altura/radiano;

printf("A altura da escada e de %.2f metros",radiano);
}
