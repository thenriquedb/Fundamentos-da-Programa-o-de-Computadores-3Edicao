/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

17) Pedro comprou um saco de ra��o com peso em quilos. Ele possui dois gatos, para os quais fornece a
quantidade de ra��o em gramas. A quantidade di�ria de ra��o fornecida para cada gato � sempre a
mesma. Fa�a um programa que receba o peso do saco de ra��o e a quantidade de ra��o fornecida para
cada gato, calcule e mostre quanto restar� de ra��o no saco ap�s cinco dias.*/

#include <stdio.h>
int main()

{
    float saco,q_racao,quantidade,resto;

    printf("CALCULO DE RACAO \n \n");

    printf("Digite o peso do saco de racao em Kg: ");
        scanf("%f",&saco);
    printf("Digite a quantidade de ra��o em gramas: ");
        scanf("%f",&q_racao);

// Calculos
saco=saco*1000;
quantidade=(q_racao*5);
resto=saco-quantidade;

printf("Apos 5 dias sobrara %.2f kg de racao",resto);
return 0;
}
