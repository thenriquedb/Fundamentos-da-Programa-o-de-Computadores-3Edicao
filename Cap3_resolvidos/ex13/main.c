/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

Sabe-se que: p� = 12 polegadas 1 jarda = 3 p�s 1 milha = 1,760 jarda Fa�a um programa que receba uma medida em p�s, fa�a as convers�es a seguir e mostre os resultados. a) polegadas; b) jardas; c) milhas.  */

#include <stdio.h>
int main()

{
    float num,pe,jarda,polegada,milha;

printf("CONVERS�O DE MEDIDAS \n \n");

printf("Digite um numero em p�s: ");
    scanf("%f",&num);

//Calculos para convers�o.
    polegada=num*12;
    pe=num*polegada;
    jarda=num*0.33;
    milha=num*0.000568182;


printf("O numero %.0f convertido para polegadas e: %.2f \n",num,polegada);
printf("O numero %.0f convertido para jardas e: %.2f \n",num,jarda);
printf("O numero %.0f convertido para milha e: %f \n",num,milha);

return 0;
}
