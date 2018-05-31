/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

16)Um supermercado deseja reajustar os pre�os de seus produtos usando o seguinte crit�rio: o produto poder� ter seu pre�o aumentado ou diminu�do.
 Para alterar o pre�o o produto deve preencher pelo menos um dos seguintes requisitos a seguir:

        Venda m�dia	       Pre�o atual	              % de aumento	% de diminui��o
    <500	                < R$ 30,00	                    10	            -
    >= 500 e < 1.200	    >= R$ 30,00 e < R$ 80,00	    15	            -
    >= 1.200                >= R $ 80,00	                -	            20

Fa�a um programa que receba o pre�o atual e a venda mensal m�dia do produto, calcule e mostre o novo pre�o. */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float venda,preco_atual,n_preco,diminuicao;

    printf("Reajuste de pre�o dos produtos de um supermercado \n\n");
    printf("Digite o pre�o atual do produto: ");
    scanf("%f",&preco_atual);
    printf("Digite a venda mensal m�dia: ");
    scanf("%f",&venda);
    printf("\n\n");


    if (preco_atual < 30 || venda<500 ) {
        printf("Ser� aumentado 10%% no pre�o atual. \n");
        preco_atual = preco_atual * 1.10;
        printf("O pre�o reajustado ser� de %.2f reais",preco_atual);
        printf("\n\n");
    }

    else if ((preco_atual>=30 && preco_atual<80) || (venda<=500 && venda<1200)) {
        printf("Ser� aumentado 15%% no pre�o atual. \n");
        preco_atual = preco_atual * 1.15;
        printf("O pre�o reajustado ser� de %.2f reais",preco_atual);
        printf("\n\n");
    }

     else if ((preco_atual>=80) || (venda>=1200)) {
        printf("Ser� diminuido em 20%% no pre�o atual. \n");
        diminuicao = preco_atual * 0.2;
        preco_atual = preco_atual - diminuicao;
        printf("O pre�o reajustado ser� de %.2f reais",preco_atual);
        printf("\n\n");
    }

system("pause");
return 0;
}
