/*  Exercios do livro Fundamentos de program��o Pascal,C,C++ ,Java 3� Edi��o
    Capitulo 3

17) Um trabalhador recebeu seu sal�rio e o depositou em sua conta banc�ria. Esse trabalhador emitiu dois
cheques e agora deseja saber seu saldo atual. Sabe-se que cada opera��o banc�ria de retirada paga
CPMF de 0,38% e o saldo inicial da conta est� zerado..*/

#include <stdio.h>
int main()

{
float sal,cpmf=1,saldo;

printf("Digite seu salario: ");
    scanf("%f",&sal);
printf("\n \n");
// CPMF seracalculada pelo salario vezes 0.38% e como sera emitido 2 cheques multiplica-se por 2
    cpmf=(sal*0.38/100)*2;
    saldo=sal-cpmf;

printf("Seu saldo atual ser� de %.2f reais",saldo);
return 0;
}
