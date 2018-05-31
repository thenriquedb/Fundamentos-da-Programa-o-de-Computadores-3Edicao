/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

21) Fa�a um programa que receba:

    * o c�digo do estado de origem da carga de um caminh�o, supondo que a digita��o do c�digo do estado seja sempre v�lida, isto �,
    um n�mero inteiro entre 1 e 5;
    * o peso da carga do caminh�o em toneladas;
    * o c�digo da carga, supondo que a digita��o do c�digo seja sempre v�lida, isto �, um n�mero inteiro entre 10 e 40.

Calcule e mostre:
    * o peso da carga do caminh�o convertido em quilos;
    * o pre�o da carga do caminh�o;
    * o valor do imposto, sabendo que o imposto � cobrado sobre o pre�o da carga do caminh�o e depende
    do estado de origem;
    * o valor total transportado pelo caminh�o, pre�o da carga mais imposto.
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"Portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int cod_estado,cod_carga;
    float imposto,peso_t,peso_kg,preco;

    printf("Calculo de valores do transporte \n\n");

    printf("Dieite o peso da carga em toneladas: ");
      scanf("%f",&peso_t);
    printf("Digite o codigo do estado de origem (1 a 5): ");
      scanf("%d",&cod_estado);
    printf("Digite o codigo da carga de origem (10 a 40): ");
      scanf("%d",&cod_carga);
    printf("\n\n");

    switch (cod_estado) {
        case 1:
        printf("ESTADO 1 \n\n");
        printf("    O peso da carga em quilos � %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga>=10 && cod_carga <= 20){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.35);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.35);
                printf("\n\n");
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.35);
                printf("\n\n");
             }

        break;

        case 2:
        printf("ESTADO 2 \n\n");
        printf("    O peso da carga em quilos � %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.25);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.25);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.25);
                printf("\n\n");
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.25);
                printf("\n\n");
            }
        break;

        case 3:
        printf("ESTADO 3 \n\n");
        printf("    O peso da carga em quilos � %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.15);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.15);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.15);
                printf("\n\n");
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.15);
                printf("\n\n");
            }
        break;

        case 4:
        printf("ESTADO 4 \n\n");
        printf("    O peso da carga em quilos � %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 100);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.055);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.05);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 250);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.15);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.05);
                printf("\n\n");
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.05);
                printf("\n\n");
            }
        break;

        case 5:
        printf("ESTADO 5 \n\n");
        printf("    O peso da carga em quilos � %.2f kg \n",peso_kg = peso_t * 1000);
            if (cod_carga >=10 && cod_carga <= 20){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 100);
                printf("    N�o ser� cobrado impostos. \n");
                printf("    O valor total do transporte ser� de R$ %.2f.",preco);
                printf("\n\n");
            }

            else if (cod_carga >20 && cod_carga <= 30){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 250);
                printf("    N�o ser� cobrado impostos. \n");
                printf("    O valor total do transporte ser� de R$ %.2f.",preco);
                printf("\n\n");;
            }

             else if (cod_carga >30 && cod_carga <= 40){
                printf("    O pre�o da carga ser� de R$ %.2f \n",preco = peso_kg * 340);
                printf("    Ser� cobrado R$ %.2f de impostos \n",imposto = preco * 0.35);
                printf("    O valor total do transporte ser� de R$ %.2f.",imposto = preco *1.15);
                printf("\n\n");
            }
        break;
    }
}
