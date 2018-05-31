/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

13) Fa�a um programa que receba o sal�rio inicial de um funcion�rio, calcule e mostre o novo sal�rio, acrescido de bonifica��o e de aux�lio escola.  Bonifica��o

Ate 500 - 5%
Acima de 500 - 12%

Auxilio escola
    Ate 600: 150 reais
    acima: 100 reais
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float sal,aumento;

    printf("Calculo de novo sal�rio com base em bonifica��o e aux�lio escola \n\n");
    printf("Digite o seu sal�rio: ");
        scanf("%f",&sal);

    if (sal < 500) {
        printf("    Voc� tem direito a 5%% de aumento. \n");
        printf("    Seu novo sal�rio ser� de %.2f",sal*1.05);
        printf("\n\n");
    }

    else if (sal>=500 && sal<=1200 && sal<600){
        printf("    Voc� tem direito a 12%% de aumento e ao aux�lio escola de R$ 150,00.\n");
        printf("    Seu novo sal�rio ser� de %.2f",sal*1.12+150);
        printf("\n\n");

    }

    else if (sal>=500 && sal<=1200){
        printf("    Voc� tem direito a 12%% de aumento.\n");
        printf("    Seu novo sal�rio ser� de %.2f",sal*1.12);
        printf("\n\n");

    }

    else if (sal>1200 && sal>600){
        printf("    Voc� tem direito a 12%% de aumento e ao aux�lio escola de R$ 100,00.\n");
        printf("    Seu novo sal�rio ser� de %.2f",sal*1.12+100);
        printf("\n\n");

    }
}
