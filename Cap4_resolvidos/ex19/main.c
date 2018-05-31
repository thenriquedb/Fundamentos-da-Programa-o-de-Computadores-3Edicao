
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

19) F. Fa�a um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre a classifica��o dessa pessoa. */


#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float peso,altura;

    printf("Classifica��o de acordo com o peso e a altura \n\n ");
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("Digite sua altura: ");
    scanf("%f",&altura);

    if (altura < 1.20) {
        if (peso<60) {
            printf("Sua classifica��o � A \n\n");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classifica��o � D \n\n");
        }
        else if (peso >90) {
            printf("Sua classifica��o � G \n\n");
        }
    }

    else if (altura >= 1.20 && altura<=1.70) {
        if (peso<60) {
            printf("Sua classifica��o � B \n\n");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classifica��o � E \n\n");
        }
        else if (peso >90) {
            printf("Sua classifica��o � H \n\n");
        }
    }

    else if (altura >= 1.70) {
        if (peso<60) {
            printf("Sua classifica��o � C \n\n");
        }
        else if (peso >=60 && peso <=90) {
            printf("Sua classifica��o � F \n\n");
        }
        else if (peso >90) {
            printf("Sua classifica��o � I \n\n");
        }
    }
system("pause");
return 0;
}

