
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

04) Fa�a um programa que receba tr�s n�meros e mostre-os em ordem crescente. Suponha que o usu�rio digitar� tr�s n�meros diferentes. */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    int n1,n2,n3;

    printf("N�meros em ordem crescente \n\n");
    printf("Digite 3 n�meros inteiros diferentes. \n\n");

    printf("    Digite um n�mero: ");
        scanf("%d",&n1);
    printf("    Digite um n�mero: ");
        scanf("%d",&n2);
     printf("   Digite um n�mero: ");
        scanf("%d",&n3);

    printf("\n\n");
    //Condi�oes
        if ((n1 > n2) && (n2 > n3)){
            printf("A ordem crescente dos n�meros �: %d,%d,%d \n",n3,n2,n1);
        }
        else if ((n1 > n3) && (n2 >n3)) {
            printf("A ordem crescente dos n�meros �: %d,%d,%d \n",n2,n3,n1);
        }
        else if ((n2 > n1) && (n1 >n3)) {
            printf("A ordem crescente dos n�meros �: %d,%d,%d \n",n3,n1,n2);
        }
        else if ((n2 > n3) && (n3 >n1)) {
            printf("A ordem crescente dos n�meros �: %d,%d,%d \n",n1,n3,n2);
        }
        else if ((n3 > n1) && (n1 >n2)) {
            printf("A ordem crescente dos n�meros �: %d,%d,%d \n",n2,n1,n3);
        }
        else if ((n3 > n2) && (n2 >n1)) {
            printf("A ordem crescente dos n�meros �: %d,%d,%d \n",n1,n2,n3);
        }
        else { //Se todas as op�oes forem falsas,essa ser� executada.
            printf("Digites n�meros diferentes \n\n");
        }
return 0;
}
