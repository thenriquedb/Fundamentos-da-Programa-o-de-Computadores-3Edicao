
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

7) Fa�a um programa que receba quatro valores: I, A, B e C. Desses valores, I � inteiro e positivo, A, B e C s�o reais. Escreva os n�meros A, B e C
obedecendo � tabela a seguir. Suponha que o valor digitado para I seja sempre um valor v�lido, ou seja, 1, 2 ou 3, e que os n�meros digitados sejam
diferentes um do outro.

    VALOR DE I           FORMAAESCREVER
        1           A,B e C em ordem crescente.
        2           A,B e C em ordem decrescente.
        3           O maior fica entre os outros dois n�meros.
*/


#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int I;
    float A,B,C;

    printf("Digite um n�mero entre 1, 2 e 3: ");
    scanf("%d",&I);

    printf("\n\n");
    printf("Digite tr�s n�meros diferentes. \n\n");
    printf("    Digite o primeiro n�mero: ");
      scanf("%f",&A);
    printf("   Digite o segundo n�mero: ");
      scanf("%f",&B);
    printf("   Digite o terceiro n�mero: ");
      scanf("%f",&C);
    printf("\n\n");

    if (I == 1)
    {
        if ((A < B) && (B < C));
        printf("A ordem crescente dos n�meros digitados �:%.0f,%.0f,%.0f \n\n",A,B,C);
    }

    else if (I == 2 )
    {
        if ((A < B) && (B < C));
        printf("A ordem decrescente dos n�meros digitados �:%.0f,%.0f,%.0f \n\n",C,B,A);
    }

    else if (I == 3)
    {
        if((A > B && A > C))
        {
            printf("O n�mero maior est� no meio: \n");
            printf("%.0f - %.0f - %.0f \n\n",B,A,C);
        }

        if((B > A && B > C))
        {
            printf("O n�mero maior est� no meio: \n");
            printf("%.0f - %.0f - %.0f \n\n",A,B,C);
        }

        if ((C > B && C > A))
        {
            printf("O n�mero maior est� no meio: \n");
            printf("%.0f - %.0f - %.0f \n\n",A,C,B);
        }
    }

    else
    {
        printf("Programa n�o pode ser executado! \n\n");
    }

    system("pause");
    return 0;
}
