#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Esse programa calcular� o o valor de um produto conforme certas condi��es..*/


    float preco,imposto,custo,desconto;
    char tipo,refrig;

    printf("Digite o pre�o do produto e aperte Enter:R$:");
     scanf("%f%*c",&preco);
    printf("Digite o pre�o do produto e aperte Enter:\n");
    printf("'A'-Alimenta��o\n'L'-Limpeza\n'V'-Vestu�rio\n");
     scanf("%c%*c",&tipo);
    printf("Digite o tipo de refrigera��o do produto e aperte Enter:\n");
    printf("'S'-Produto que precisa de refrigera��o\n'N'-Produto que n�o precisa de refrigera��o\n");
     scanf("%c%*c",&refrig);

    switch(refrig){
    case 'N':
        switch(tipo){
        case 'A':
            if(preco < 15){
                preco = preco + 2;
                printf("O valor adicional ser� de R$2.00\n");
            } else if(preco >= 15){
                preco = preco + 5;
                printf("O valor adicional ser� de R$5.00\n");
            }
            break;
        case 'L':
            if(preco < 10){
                preco = preco + 1.50;
                printf("O valor adicional ser� de R$1.50\n");
            } else if(preco >= 10){
                preco = preco + 2.50;
                printf("O valor adicional ser� de R$2.50\n");
        }
        break;
        case 'V':
            if(preco < 30){
                preco = preco + 3;
                printf("O valor adicional ser� de R$3.00\n");
            } else if(preco >= 30){
                preco = preco + 2.5;
                printf("O valor adicional ser� de R$2.50\n");
            }
            break;
        default:
            printf("Digite valores v�lidos!\n");
    }
    break;
        case 'S':
        switch(tipo){
        case 'A':
            preco = preco + 8;
            printf("O valor adicional ser� de R$8.00\n");
            break;
        case 'L':
            printf("N�o haver� valor adicional\n");
            break;
        case 'V':
            printf("N�o haver� valor adicional\n");
            break;
        default:
            printf("Digite valores v�lidos!\n");
        }
        break;
        default:
            printf("Digite valores v�lidos!\n");

    }
    if(preco < 25){
        imposto = preco * 0.05;
        printf("O imposto ser� de R$%.2f\n",imposto);
    }

    else if(preco >= 25){
        imposto = preco * 0.08;
        printf("O imposto ser� de R$%.2f\n",imposto);
    }

    custo = preco + imposto;
    printf("O pre�o do custo do produto ser� de R$%.2f\n",custo);
    if(tipo == 'A' && refrig == 'S'){
        imposto = 0;
        printf("O produto n�o ter� desconto\n");
    }

    else{
        imposto = 0.03 * preco;
        printf("O produto ter� um desconto de R$%.2f\n",imposto);
        }
    preco = preco - imposto;
    printf("O novo pre�o do produto ser� de R$%.2f\n",preco);
    if(preco <= 50){
        printf("O produto � barato");
    } else if(preco > 50 && preco < 100){
        printf("O produto tem pre�o normal");
    } else if(preco >= 100){
        printf("O produto � caro");
    }
    return 0;
}
