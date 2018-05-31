/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

18) Dados tr�s valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um tri�ngulo e, se forem, verifique
se � um tri�ngulo equil�tero, is�sceles ou escaleno. Se eles n�o formarem um tri�ngulo, escreva uma mensagem. Considere que:

    * o comprimento de cada lado de um tri�ngulo � menor que a soma dos outros dois lados;
    * chama-se equil�tero o tri�ngulo que tem tr�s lados iguais;
    * denomina-se is�sceles o tri�ngulo que tem o comprimento de dois lados iguais;
    * recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float l1,l2,l3,soma1,soma2,soma3;

    printf("Classifica��o de tri�ngulos \n\n");

    printf("digite o valor do primeiro lado: ");
    scanf("%f",&l1);
    printf("digite o valor do segundo lado: ");
    scanf("%f",&l2);
    printf("digite o valor do terceiro lado: ");
    scanf("%f",&l3);
    printf("\n\n");

    soma1 = l1 + l2;
    soma2 = l1+ l3;
    soma3 = l2+l3;

    if ((l1 < soma1  && l1<soma2 && l1<soma3) && (l2 <soma1 && l2<soma2 && l2<soma3) && (l3 <soma1 && l3<soma2 && l3<soma3 ))
    {
        if (l1==l2 && l1==l3 && l2==l3) {
            printf("Tri�ngulo equil�tero. \n\n");
        }
            else if (l1==l2 || l1==l3 || l2==l3) {
            printf("Tri�ngulo is�celes. \n\n");
            }
                else if (l1!=l2 && l1!=l3 && l2!=l3) {
                printf("Tri�ngulo esclaneo. \n\n");
                }
    }
    else {
        printf("N�o � tri�ngulo. \n\n");
    }

system("pause");
return 0;
}

