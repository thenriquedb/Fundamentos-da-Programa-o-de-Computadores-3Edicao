/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

19) Sabe-se que, para iluminar de maneira correta os c�modos de uma casa, para cada m2, deve-se usar 18 W
de pot�ncia. Fa�a um programa que receba as duas dimens�es de um c�modo (em metros), calcule e mostrea sua �rea (em m
2) e a pot�ncia de ilumina��o que dever� ser uti  */

#include <stdio.h>
int main()

{
    float comp,larg,area,ilum;

    printf("CALCULO DA POENCIA DE ILUMINACAO \n \n");

    printf("Digite o comprimento do comodo: ");
        scanf("%f",&comp);
    printf("Digite a largura do comodo: ");
        scanf("%f",&larg);

// Calculo
area=comp*larg;
ilum=area*1.8;

printf("Seu comodo possui %.2f metros quadrados.\n",area);
printf("Sera necessario %.2f Watts para ilumina-lo.",ilum);
}
