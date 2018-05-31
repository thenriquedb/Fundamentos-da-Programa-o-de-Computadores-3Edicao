
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

7) Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o do usu�rio e os dados neces- s�rios para executar cada opera��o.

Menu de op��es:
  1. Somar doisn�meros.
  2. Raiz quadrada deum n�mero.

Digite a op��o */

#include <stdio.h>
#include <math.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int opcao;
    float num1,num2,soma,raiz;

    printf("Calculadora simples \n\n");
    printf("MENU DE OP��ES \n");
    printf("    1. Somar dois n�meros. \n");
    printf("    2. Raiz quadrada de um n�mero. \n\n");
    printf("Digite a op��o desejada. ");
    scanf("%d",&opcao);

    if (opcao== 1)
    {
        printf("\n");
        printf("SOMA DE DOIS N�MEROS \n\n");
        printf("Digite um n�mero: ");
        scanf("%f",&num1);
        printf("Digite um n�mero: ");
        scanf("%f",&num2);
        soma = num1 + num2;
        printf("\n");
        printf("    %.2f + %.2f = %.2f \n\n",num1,num2,soma);
    }
    else if (opcao == 2)
    {
        printf("\n");
        printf("RAIZ QUADRADADA DE UM N�MERO \n\n");
        printf("Digite um n�mero: ");
        scanf("%f",&num1);
        raiz = sqrt(num1);
        printf("    A raiz quadrada de %.2f � %.2f \n\n",num1,raiz);
    }
    else
    {
        printf("\n\n");
        printf("Comando inv�lido.");
        printf("\n\n");
    }

    system("pause");
    return 0;
}
