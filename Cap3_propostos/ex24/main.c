/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3 - Exercicios Propostos

24) Fa�a um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela vai passar por v�rios pa�ses e
precisa converter seu dinheiro em d�lares, marco alem�o e libra esterlina.Sabe--se que a cota��o do d�lar � de R$ 1,80;
do marco alem�o, de R$ 2,00; e da libra esterlina, de R$ 3,57. Oprograma deve fazer as convers�es e mostr�-las
 */

#include <stdio.h>
int main()
{
float reais,dolar,marco,libra;

    printf("CONVERSAO DE MOEDAS \n\n");

    printf("Digite o valor em reais: ");
        scanf("%f",&reais);
//Calculos para as conversoes.
dolar=reais / 1.8;
marco=reais / 2;
libra=reais / 3.57;

printf("%.2f reais convertido em doalr e %.2f \n",reais,dolar);
printf("%.2f reais convertido em marco alemao e %.2f \n",reais,marco);
printf("%.2f reais convertido em libras esterlina e %.2f \n",reais,libra);





}
