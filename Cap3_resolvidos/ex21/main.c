/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

21) Uma pessoa deseja pregar um quadro em uma parede. Fa�a um programa para calcular e mostrar
que dist�ncia a escada deve estar da parede. A pessoa deve fornecer o tamanho da escada e a altura ema
que deseja pregar o quadro.
Lembre-se de que o tamanho da escada deve ser maior que a altura que se deseja alcan�ar. */

#include <stdio.h>
#include <math.h>
int main()

{
    float a_escada,a_quadro,distancia;

printf("Digite a altua da escada: ");
    scanf("%f",&a_escada);
printf("Digite a altura do quadro: ");
    scanf("%f",&a_quadro);

// Sera usado a formula do teorema de pitagoras para calcular a distancia
distancia=pow(a_escada,2) - pow(a_quadro,2);
distancia= sqrt(distancia);

printf("A distancia ser� de aproximadamente %.2f metros",distancia);
}
