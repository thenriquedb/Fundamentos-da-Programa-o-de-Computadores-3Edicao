
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

06) Fa�a um programa que receba um n�mero inteiro e verifique se � par ou �mpar.*/


#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int num,div;

    printf("Verificar se n�mero � par ou impar \n\n");
    printf("Digite um n�mero: ");
        scanf("%d",&num);

    div = num % 2; //Utiliza-se % para armazenar o resto da divis�o.

    printf("\n\n");

    if (div == 0){ //== igual a...
        printf("O n�mero %d � par. \n",num);
    }
    else {
        printf("O n�mero %d � impar \n",num);
    }
return 0;
}
