
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

10) Fa�a um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
usu�rio. Cada data deve ser composta por tr�s valores inteiros, em que o primeiro representa o dia, o
segundo, o m�s e o terceiro, o ano. */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int dia,mes,ano;
    int dia2,mes2,ano2;
    int soma1,soma2;

    printf("Comparador de datas \n\n");

    printf("Primeira data \n");
    printf("    Digite o dia (1 a 31): ");
        scanf("%d",&dia);
    printf("    Digite o m�s (1 a 12): ");
        scanf("%d",&mes);
    printf("    Digite o ano: ");
        scanf("%d",&ano);

    printf("\n");

    printf("Segunda data \n");
    printf("    Digite o dia (1 a 31): ");
        scanf("%d",&dia2);
    printf("    Digite o m�s (1 a 12): ");
        scanf("%d",&mes2);
    printf("    Digite o ano: ");
        scanf("%d",&ano2);

        soma1 = dia+mes+ano;
        soma2 = dia2+mes2+ano2;
// Para a simplifica��o do codigo decidi somar as datas,assim a soma que d� o maior valor � da data maior.

    if (soma1 > soma1) {
        printf("\n\n");
        printf("A maior data � %d/%d/%d \n",dia,mes,ano);
        printf("\n\n");
    }
        else {
        printf("\n\n");
        printf("A maior data � %d/%d/%d \n",dia2,mes2,ano2);
        printf("\n\n");
        }
    }

