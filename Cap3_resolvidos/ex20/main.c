/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

17) Fa�a um programa que receba a medida do �ngulo (em graus) formado por uma escada apoiada no
ch�o e encostada na parede e a altura da parede onde est� a ponta da escada. Calcule dida dessa escada. e mostre a me-
Observa��o: as fun��es trigonom�tricas implementadas nas linguagens de programa��o trabalham
com medidas de �ngulos em radianos. */

#include <stdio.h>
int main()

{
    float angulo,altura,escada,radiano;

printf("CALCULO DE COMPRIMENTO DA ESCADA \n \n");

printf("Digite a altura da parede em que a escada esta apoiada: ");
    scanf("%f",&altura);
printf("Digite o angulo em que a escada est� apoiada: ");
    scanf("%f",&angulo);

// Calculos
radiano=angulo*3.14 / 180;
escada=altura/radiano;

printf("A altura da escada e de %.2f metros",radiano);
}
