/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

25) Fa�a um programa que receba uma hora (uma vari�vel para hora e outra para minutos), calcule emostre:
a)a hora digitada convertida em minutos;
b)o total dos minutos, ou seja, os minutos digitados mais a convers�o anterior;
c)o total dos minutos convertidos em segundos
*/

#include <stdio.h>
int main()

{
int hora,min,t_min,segundos,h_para_m;

    printf("CONVERSAO DE TEMPO \n\n");
    printf("Digite a hora: ");
        scanf("%d",&hora);
    printf("Digite os minutos: ");
        scanf("%d",&min);
//Calculos
h_para_m=hora*60;
t_min=h_para_m + min;
segundos=t_min*60;

printf("%d horas possui %d minutos \n",hora,h_para_m);
printf("%d:%dh possui %d minutos \n",hora,min,t_min);
printf("%d:%dh possui %d segundos \n",hora,min,segundos);

}
