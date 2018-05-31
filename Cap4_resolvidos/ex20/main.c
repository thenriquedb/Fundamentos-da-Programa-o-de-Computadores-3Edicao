/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

20) Fa�a um programa que receba:

    * O c�digo de um produto comprado, supondo que a digita��o do c�digo do produto seja sempre v�lida, isto �, um n�mero inteiro entre 1 e 10.
    * O peso do produto em quilos.
    * O c�digo do pa�s de origem, supondo que a digita��o do c�digo seja sempre v�lida, isto �, um n�mero inteiro entre 1 e 3.

Calcule e mostre:
    * o peso do produto convertido em gramas;
    * o pre�o total do produto comprado;
    * o valor do imposto, sabendo que ele � cobrado sobre o pre�o total do produto comprado e dependedo pa�s de origem;
    * o valor total, pre�o total do produto mais imposto.
*/


#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"Portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int cod_produto,cod_pais;
    float peso,gramas,preco,imposto;

    printf("Calculo de imposto e valor da cada grama \n\n");

    printf("Digite o codigo do produto comprado (1 a 10): ");
    scanf("%d",&cod_produto);
    printf("Digite o peso do produto(em KG): ");
    scanf("%f",&peso);
    printf("Digite o codigo do pa�s de origem (1 a 3): ");
    scanf("%d",&cod_pais);

    if ((cod_pais == 1) && (cod_produto>=1 && cod_produto<=4)) {
        //Calculos
            gramas = peso * 1000;
            preco = gramas / 10;
        //
            printf("\n");
            printf("O peso %.2f em gramas � %.2fg \n",peso,gramas);
            printf("O pre�o toal do produto � R$ %.2f \n",preco);
            printf("N�o ser� cobrado impostos. \n\n");
    }

    else if ((cod_pais == 2) && (cod_produto>=5 && cod_produto<=7)) {
        //Calculos
            gramas = peso * 1000;
            preco = gramas / 25;
            imposto = preco * 0.15;
        //
            printf("\n");
            printf("O peso %.2f em gramas � %.2 g \n",peso,gramas);
            printf("O pre�o toal do produto � R$ %.2f \n",preco);
            printf("Impostos: R$ %.2f \n\n");
    }

      else if ((cod_pais == 3) && (cod_produto>=8 && cod_produto<=10)) {
        //Calculos
            gramas = peso * 1000;
            preco = gramas / 35;
            imposto = preco * 0.25;
        //
            printf("\n");
            printf("O peso %.2f em gramas � %.2 g \n",peso,gramas);
            printf("O pre�o toal do produto � R$ %.2f \n",preco);
            printf("Impostos: R$ %.2f \n\n");
    }

    else {
        printf("\n\n");
        printf("COMANDO INV�LIDO.");
    }

}


