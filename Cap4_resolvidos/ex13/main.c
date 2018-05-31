/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

13) Fa�a um programa que apresente o menu a seguir, permita ao usu�rio escolher a op��o desejada, re- ceba os dados necess�rios para executar a
opera��o e mostre o resultado. Verifique a possibilidade de op��o inv�lida e n�o se preocupe com restri��es, como sal�rio negativo.

Menu de op��es:
1. Imposto
2. Novo sal�rio
3. Classifica��o  */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int opt;
    float sal,imposto;

    printf("CODIGO     OP��ES \n");
    printf("  1        Impostos \n");
    printf("  2        Novo sal�rio \n");
    printf("  3        Classifica��o \n\n");

    printf("Digite a op��o desejada: ");
        scanf("%d",&opt);
    printf("\n\n");

    switch (opt) {
    //Se op��o 1 for selecionada
        case 1:
            printf("Impostos \n\n");
            printf("    Digite o valor de seu sal�rio: ");
            scanf("%f",&sal);
                if (sal < 500) {
                    imposto = sal  * 0.05;
                    printf("    Voc� pagar� %.2f reais de impostos.",imposto);
                    printf("\n\n");
                }

                if (sal>=500 && sal <=800) {
                    imposto = sal  * 0.1;
                    printf("    Voc� pagar� %.2f reais de impostos.",imposto);
                    printf("\n\n");
                }

                if (sal>850) {
                    imposto = sal  * 0.15;
                    printf("    Voc� pagar� %.2f reais de impostos.",imposto);
                    printf("\n\n");
                }
        break;

    //Se op��o 2 for selecionada
        case 2:
            printf(" Aumento de sal�rio \n\n");
            printf("    Digite o valor de seu sal�rio: ");
            scanf("%f",&sal);

                if (sal>1500) {
                    printf("    O Seu aumento ser� de R$ 25,00. \n");
                    printf("    Seu novo sal�rio ser� de %.2f reais",sal+25);
                    printf("\n\n");
                }

                else if (sal>=750 && sal<=1500) {
                    printf("    O Seu aumento ser� de R$ 50,00. \n");
                    printf("    Seu novo sal�rio ser� de %.2f reais",sal+50);
                    printf("\n\n");
                }

                 else if (sal>=450 && sal<750) {
                    printf("    O Seu aumento ser� de R$ 75,00. \n");
                    printf("    Seu novo sal�rio ser� de %.2f reais",sal+75);
                    printf("\n\n");
                }

                 else if (sal<450) {
                    printf("    O Seu aumento ser� de R$ 100,00. \n");
                    printf("    Seu novo sal�rio ser� de %.2f reais",sal+100);
                    printf("\n\n");
                }
        break;

//Se op��o 3 for selecionada
        case 3:
            printf("Classifica��o do sal�rio \n\n");
            printf("    Digite o valor de seu sal�rio: ");
            scanf("%f",&sal);
                if (sal <= 700) {
                    printf("    Mal remunerado.");
                    printf("\n\n");
                }

                else if (sal>700) {
                    printf("    Bem remunerado.");
                    printf("\n\n");
                }
        break;

//Se n�o for digitada nenhuma das op��es possiveis
        default: {
        printf("Op��o inv�lida");
        printf("\n\n");
        }
    }
}
