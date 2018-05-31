/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

23)
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"Portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    char turno,cargo;
    float sal_min,sal_bruto,horas,vlr_h,imposto,sal_liq,vale_alimentacao;


    printf("Calculo de sal�rio \n\n");
    printf("Digite o num�ro de horas trabalhadas: ");
    scanf("%f",&horas);
    printf("Digite o valor do sal�rio m�n�mo: ");
    scanf("%f",&sal_min);
    printf("\n\n");

    printf("Turnos de trablaho      Valor do coeficiente \n");
    printf("  Matutino - M          10%% do sal�rio m�nimo. \n");
    printf("  Vespertino - V        15%% do sal�rio m�nimo. \n");
    printf("  Noturno - N           12%% do sal�rio m�nimo. \n");

    printf("\n\n");
    printf("Com base na tebela digite a letra referente ao seu turno de trabalho: ");
    scanf(" %c",&turno);
    printf("\n\n");

    switch (turno)
    {
//Maturino
    case 'm' :
        vlr_h = sal_min * 0.1;
        sal_bruto = vlr_h * horas;
        printf("Turno matutino \n");
        printf("   Seu sal�rio bruto ser� de R$ %.2f.",sal_bruto);
        printf("\n\n");
        break;

    //Vespertino
    case 'v':
        vlr_h = sal_min * 0.15;
        sal_bruto = vlr_h * horas;
        printf(" Turno vespertino \n");
        printf("    Seu sal�rio bruto ser� de R$ %.2f.",sal_bruto);
        printf("\n\n");
        break;
    //Noturno
    case 'n':
        vlr_h = sal_min * 0.12;
        sal_bruto = vlr_h * horas;
        printf("Turno noturno \n");
        printf("   Seu sal�rio bruto ser� de R$ %.2f.",sal_bruto);
        printf("\n\n");
        break;

    default:
        printf("Comando inv�lido \n");

    }

    printf("Calculo dos impostos e gratifica��o \n\n");
    printf("    O - Operario \n");
    printf("    G- Gerente \n\n");
    printf("Digite o seu cargo: ");
    scanf(" %c%*c",&cargo);

    //Operario
    if (cargo == 'o')
    {
        if (sal_bruto >= 300)
        {
            imposto = sal_bruto * 0.05;
            printf("O seu imposto sera de R$ %.2f. ",imposto);
            printf("Seu sal�rio liquido ser� de R$ %.2f",sal_liq);
            printf("\n \n");
        }

        else if (sal_bruto < 300)
        {
            imposto = sal_bruto *0.03;
            printf("O seu imposto sera de R$ %.2f. ",imposto);
            printf("\n \n");
        }
    }

    //Gerente
    if (cargo == 'g')
    {
        if (sal_bruto >= 400)
        {
            imposto = sal_bruto *0.06;
            printf("O seu imposto sera de R$ %.2f. \n",imposto);
            printf("\n \n");
        }

        else if (sal_bruto < 400)
        {
            imposto = sal_bruto *0.03;
            printf("O seu imposto sera de R$ %.2f. \n",imposto);
            printf("\n \n");
        }
    }

    //Calculo do salario bruto parcial
    sal_bruto = sal_bruto - imposto;
    //

    //Gratifica��o
    if (turno == 'n' && horas >80)
    {
        sal_liq = sal_bruto + 50;
        printf("Gratifica��o: R$ 50,00 \n");
    }

    else
    {
        sal_liq = sal_bruto + 30;
        printf("Gratifica��o: R$ 30,00 \n");

    }
    //

    //Vale alimenta��o
    if (cargo == 'o' && vlr_h <= 25 )
    {
        vale_alimentacao = sal_bruto / 3;
        printf("Vale alimenta��o: R$ %.2f",vale_alimentacao);
        sal_liq = sal_liq + vale_alimentacao;
    }

    printf("Seu sal�rio liquido � R$ %.2f",sal_liq);
    printf("\n\n");

    if(sal_liq < 350)
    {
        printf("Mal remunerado. \n");
    }

    else if (sal_liq >=350 && sal_liq < 600 )
    {
        printf("Normal. \n");
    }

    else if ( sal_liq > 600)
    {
        printf("Bem remunerado \n\n");
    }
    system("pause");
    return 0;
}




