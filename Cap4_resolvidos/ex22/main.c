/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

22)
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"Portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    float salario,tempo,gratificacao,imposto;

    printf("Calculo de sal�rio \n\n");
    printf("Digite seu sal�rio: ");
    scanf("%f",&salario);
    printf("Digite seu tempo de servi�o: ");
    scanf("%f",&tempo);
    printf("\n\n");

// Para facilitar a cria��o do codigo decidi trabalhar com margens de erro.

//1� Bloco
    if (salario < 500)
        if (salario < 200) {
            printf("    Voc� est� insento de impostos. \n");
            printf("    Sua classifica��o � A \n");

        if (tempo > 0 && tempo <3)
        {
            printf("    Voc� reber� R$ 23,00 de gratifica��o. \n");
            printf("    Seu sal�rio l�quido ser� de R$ %.2f.",salario + 23);
            printf("\n\n");
        }

        else if (tempo >=3 && tempo <6)
        {
            printf("    Voc� reber� R$ 35,00 de gratifica��o. \n");
            printf("    Seu sal�rio l�quido ser� de R$ %.2f.",salario + 33);
            printf("\n\n");
        }

        else if (tempo >= 6)
        {
            printf("    Voc� reber� R$ 33,00 de gratifica��o. \n");
            printf("    Seu sal�rio l�quido ser� de R$ %.2f.",salario + 33);
            printf("\n\n");
        }

        if (salario >=200 && salario <450)
        {
            printf("    Sua classifica��o � B \n");
        }
        if (tempo > 0 && tempo <3)
        {
            imposto = salario * 0.03;
            printf("    Voc� reber� R$ 23,00 de gratifica��o. \n");
            printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
            printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 23);
            printf("\n\n");
        }

        else if (tempo >=3 && tempo <6)
        {
            imposto = salario * 0.03;
            printf("    Voc� reber� R$ 35,00 de gratifica��o. \n");
            printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
            printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 23);
            printf("\n\n");
        }

        else if (tempo >= 6);
        {
            imposto = salario * 0.03;
            printf("    Voc� reber� R$ 33,00 de gratifica��o. \n");
            printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
            printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 23);
            printf("\n\n");
        }
        }

    if (salario >=450 && salario<500)
    {
        printf("    Sua classifica��o � B \n");

    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.03;
        printf("    Voc� reber� R$ 23,00 de gratifica��o. \n");
        printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
        printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 23);
        printf("\n\n");
    }

    else if (tempo >=3 && tempo <6)
    {
        imposto = salario * 0.03;
        printf("    Voc� reber� R$ 35,00 de gratifica��o. \n");
        printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
        printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 23);
        printf("\n\n");
    }

    else if (tempo >= 6)
    {
        imposto = salario * 0.03;
        printf("    Voc� reber� R$ 33,00 de gratifica��o. \n");
        printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
        printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 23);
        printf("\n\n");
    }
}

if (salario >= 500 && salario < 700);
{
    if (salario >=500 && salario < 600)
    {
        printf("    Sua classifica��o � B \n");
    }
    else
    {
        printf("    Sua classifica��o � C \n");
    }

    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.08;
        printf("    Voc� reber� R$ 20,00 de gratifica��o. \n");
        printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
        printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 20);
        printf("\n\n");
    }

    else if (tempo >= 3)
    {
        imposto = salario * 0.08;
        printf("    Voc� reber� R$ 30,00 de gratifica��o. \n");
        printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
        printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 30);
        printf("\n\n");
    }
}
//Fim do 4� bloco

//inicio do 5� bloco
if (salario >= 700);
{
    printf("    Sua classifica��o � C \n");
    if (tempo > 0 && tempo <3)
    {
        imposto = salario * 0.12;
        printf("    Voc� reber� R$ 20,00 de gratifica��o. \n");
        printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
        printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 20);
        printf("\n\n");
    }

    else if (tempo >= 3)
    {
        imposto = salario * 0.12;
        printf("    Voc� reber� R$ 30,00 de gratifica��o. \n");
        printf("    Voc� pagar� R$ %.2f de impostos. \n",imposto);
        printf("    Seu sal�rio l�quido ser� de R$ %.2f. \n",salario - imposto + 30);
        printf("\n\n");
    }
}
}







