/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

13) Fa�a um programa que receba o n�mero de horas trabalhadas e o valor do sal�rio m�nimo, calcule e
mostre o sal�rio a receber, seguindo estas regras:
a) a hora trabalhada vale a metade do sal�rio m�nimo.
b) o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada.
c) o imposto equivale a 3% do sal�rio bruto.
d) o sal�rio a receber equivale ao sal�rio bruto menos o imposto.*/

#include <stdio.h>
int main()
{
float horas,sal_min,vlr_hr,vlr_bruto,imposto,sal_total;

printf("CALCULO DE SALARIO \n\n");

printf("Digite o numero de horas trabalhadas: ");
    scanf("%f",&horas);
printf("Digite o valor do salariominimo: ");
    scanf("%f",&sal_min);

// Calculosn a serem efetuados
    vlr_hr=sal_min / horas;
    vlr_bruto= horas*vlr_hr;
    imposto= vlr_bruto * 0.03;
    sal_total=vlr_bruto-imposto;

printf("\n \n O salario a receber ser� de %.2f reais",sal_total);
}
