
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

01) Fa�a um programa que receba dois n�meros e mostre o maior. */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()

{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    int n1,n2;

    printf("Descubra qual num�ro � maior! \n \n");
    printf("Digite um n�mero: ");
        scanf("%d",&n1);
    printf("Digite um n�mero: ");
        scanf("%d",&n2);
    printf("\n");

    if(n1 > n2) {
        printf("%d � maior que %d",n1,n2);
    }
    else {
        printf("%d � maior que %d. \n\n",n2,n1);
    }

return 0;
}
