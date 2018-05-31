/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

11) Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio e seu sal�rio atual e mostre o cargo,
o valor do aumento e seu novo sal�rio. Os cargos est�o na tabela a seguir.  */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int opt;
    float sal,aumento,n_sal;

    printf("Aumento de sal�rio de acordo com o cargo \n\n");
    printf("CODIGO        CARGO \n");
    printf("  1        Escritur�rio\n");
    printf("  2        Secret�rio\n");
    printf("  3        Caixa\n");
    printf("  4        Gerente\n");
    printf("  5        Diretor\n\n");

    printf("Digite o codigo referente ao seu cargo: ");
        scanf("%d",&opt);
    printf("------------------------------------------------------\n");

    switch (opt) { //Switch � usado para simplificar os if.
    case 1:
        printf("Cargo de escritur�rio \n\n");
        printf("Digite seu sal�rio: ");
        scanf("%f",&sal);

        aumento = sal * 0.5;
        n_sal = sal + aumento;

        printf("    O seu aumento ser� de %.2f reais \n",aumento);
        printf("    Seu novo sal�rio ser� de %.2f reais \n\n",n_sal);
        printf("------------------------------------------------------\n");
    break;

    case 2:
        printf("Cargo de Secret�rio \n\n");
        printf("Digite seu sal�rio: ");
        scanf("%f",&sal);

        aumento = sal * 0.35;
        n_sal = sal + aumento;

        printf("    O seu aumento ser� de %.2f reais \n",aumento);
        printf("    Seu novo sal�rio ser� de %.2f reais \n\n",n_sal);
        printf("------------------------------------------------------\n");
    break;

    case 3:
        printf("Cargo de Caixa \n\n");
        printf("Digite seu sal�rio: ");
        scanf("%f",&sal);

        aumento = sal * 0.2;
        n_sal = sal + aumento;

        printf("    O seu aumento ser� de %.2f reais \n",aumento);
        printf("    Seu novo sal�rio ser� de %.2f reais \n\n",n_sal);
        printf("------------------------------------------------------\n");
    break;

    case 4:
        printf("Cargo de Gerente \n\n");
        printf("Digite seu sal�rio: ");
        scanf("%f",&sal);

        aumento = sal * 0.1;
        n_sal = sal + aumento;

        printf("    O seu aumento ser� de %.2f reais \n",aumento);
        printf("    Seu novo sal�rio ser� de %.2f reais \n\n",n_sal);
        printf("------------------------------------------------------\n");
    break;

    case 5:
        printf("Cargo de Secret�rio \n\n");
        printf("N�o determinado \n \n");
        printf("------------------------------------------------------\n");
    break;

    default:
        printf("------------------------------------------------------\n");
        printf("Codigo inv�lido \n\n");
        printf("------------------------------------------------------\n");
    break;
    }
system("pause");
return 0;
}
