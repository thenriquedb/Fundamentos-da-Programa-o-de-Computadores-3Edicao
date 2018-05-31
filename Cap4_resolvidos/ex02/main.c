
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

02) Fa�a um programa que receba tr�s notas de um aluno, calcule e mostre a m�dia aritm�tica e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que dever�o
tirar para serem aprovados, considerando que a m�dia exigida � 6,0.

M�DIA ARITM�TICA
>=0 e > 3 - Reprovado
>=3 e > 7 - Exame
>=7 e >= 10 - Aprovado
*/

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    float n1,n2,n3,media,exame;

    printf("Nota final \n \n");

    printf("Digite a primeira nota: ");
        scanf("%f",&n1);
    printf("Digite a segunda nota: ");
        scanf("%f",&n2);
    printf("Digite a terceira nota: ");
        scanf("%f",&n3);

    printf("\n \n");
    printf("M�DIA ARITM�TICA \n");
        printf("    >=0 e > 3 - Reprovado \n");
        printf("    >=3 e > 7 - Exame \n");
        printf("    >=7 e >= 10 - Aprovado \n\n");

    media= (n1+n2+n3) / 3;

//Inicio das condicionais
    if ((media >=0 && media < 3)) { // && � o operador logico E
        printf("Sua m�dia � %.2f,portanto est� reprovado \n",media);
    }
    else if((media >=3) && (media < 7)) {
        exame = 6 - media;
        printf("Sua m�dia � %.2f,portanto est� em exame \n",media);
        printf("Falta %.2f pontos para voc� ser aprovado. \n\n",exame);
    }
    else if ((media >= 7) && (media <= 10)) {
        printf("Sua m�dia � %.2f,portanto est� aprovado \n",media);
    }
//Fim das condicionais
return 0;
}
