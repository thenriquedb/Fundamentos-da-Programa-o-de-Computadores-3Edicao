/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

21) Fa�a um programa que receba o n�mero de horas trabalhadas, o valor do sal�rio m�nimo e o n�mero
de horas extras trabalhadas, calcule e mostre o sal�rio a receber, de acordo com as regras a seguir:
a)a hora trabalhada vale 1/8 do sal�rio m�nimo;
b)a hora extra vale 1/4 do sal�rio m�nimo
c)o sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada;
d)a quantia a receber pelas horas extras equivale ao n�mero de horas extras trabalhadas multiplicado pelo valor
da hora extra;
e)o sal�rio a receber equivale ao sal�rio bruto mais a quantia a receber pela hora extra */

#include <stdio.h>
int main()
{
    float horas,sal_m,hrextra,total,vlr_hr,vlr_he,s_bruto;

    printf("CALCULO DE SALARIO \n\n");
    printf("Digite o valor do salario minimo: ");
        scanf("%f",&sal_m);
     printf("Digite a quantidade de horas trabalhadas: ");
        scanf("%f",&horas);
    printf("Digite a quantidade de horas extras trabalhadas: ");
        scanf("%f",&hrextra);

    vlr_hr=sal_m / 8;
    vlr_he=sal_m / 4;
    s_bruto=horas * vlr_hr;
    total=(vlr_he*hrextra)+s_bruto;

    printf("Salario a receber: %.2f reais",total);

}
