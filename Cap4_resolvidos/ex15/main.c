/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

15) Fa�a um programa que receba o valor do sal�rio m�nimo, o n�mero de horas trabalhadas, o n�mero de dependentes do funcion�rio e
a quantidade de horas extras trabalhadas. Calcule e mostre o sal�rio a receber do funcion�rio de acordo com as regras a seguir:

    * O valor da hora trabalhada � igual a 1/5 do sal�rio m�nimo.
    * O sal�rio do m�s � igual ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada.
    * Para cada dependente, acrescentar R$ 32,00.
    * Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%.
    * O sal�rio bruto � igual ao sal�rio do m�s mais o valor dos dependentes mais o valor das horas extras.
    * Calcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir:

        IRRF        SAL�RIO BRUTO
        Isento      Inferior a R$200,00
        10%         De R$200,00 at� R$500,00
        20%         Superior a R$500,00

    * O sal�rio l�quido � igual ao sal�rio bruto menos IRRF.
    * A gratifica��o � de acordo com a tabela a seguir:

        SAL�RIO L�QUIDO             GRATIFICA��O
        At�R$350,00                 R$100,00
        Superior a R$ 350,00        R$ 50,00

    * O sal�rio a receber do funcion�rio � igual ao sal�rio l�quido mais a gratifica��o.
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.

    int dependentes,hr_extra,hr_trab;;
    float sal_min,sal_mes,sal_bruto,sal_liq,imposto;
    float vlr_hrextra,vlr_hrtrabalhada,total_hrextra;

    printf("Calculo do sal�rio total de um funcion�rio \n\n");
    printf("Digite o valor do sal�rio m�nimo: ");
        scanf("%f",&sal_min);
    printf("Digite o n�mero de horas trabalhadas: ");
        scanf("%d",&hr_trab);
    printf("Digite o n�mero de dependentes do funcion�rio: ");
        scanf("%d",&dependentes);
    printf("Digite o numero de horas extras trabalhadas: ");
        scanf("%d",&hr_extra);

//Calculos segundo as regras propostas
    vlr_hrtrabalhada = sal_min / 5;
    sal_mes = hr_trab * vlr_hrtrabalhada;;
    vlr_hrextra = vlr_hrtrabalhada * 1.5;
    total_hrextra = vlr_hrextra * hr_extra;
    sal_bruto = total_hrextra + sal_mes;
    sal_bruto = sal_bruto + (32*dependentes);
//Fim dos calculos
    printf("\n\n");

//Calculo dos impostos
    if (sal_bruto >=200 && sal_bruto<=500) {
        imposto = sal_bruto * 0.1;
        sal_liq = sal_bruto - imposto;
}

   else if (sal_bruto >500) {
        imposto = sal_bruto * 0.2;
        sal_liq = sal_bruto - imposto;
}

//Calculo de bonifica��o
    if (sal_liq<350) {
        sal_liq = sal_liq + 100;
        printf("O valor total de seu sal�rio � de %.2f reais. \n",sal_liq);
    }

    else if(sal_liq >= 350) {
        sal_liq = sal_liq + 50;
        printf("O valor total de seu sal�rio � de %.2f reais. \n",sal_liq);
    }
system("pause");
return 0;
}
