
/* Fundamentos da Programa��o de computadores
Capitulo 4 -  Condicionais Exercios Resolvidos

11) Fa�a um programa que receba a hora do in�cio de um jogo e a hora do t�rmino (cada hora � composta por duas vari�veis inteiras: hora e minuto).
Calcule e mostre a dura��o do jogo (horas e minutos), sabendo que o tempo m�ximo de dura��o do jogo � de 24 horas e que ele pode come�ar em um dia e
terminar no dia seguinte.  */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.

int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecerem.
    int hi_hora,hi_min; //Hora de inicio.
    int hf_hora,hf_min; //Hora do fim.
    int tempo_inicio,tempo_final;
    float duracao;

    printf("Calculo da dura��o de um jogo \n\n");

    printf("Digite a hora do in�cio do jogo: ");
        scanf("%d",&hi_hora);
    printf("Digite os minutos do in�cio do jogo: ");
        scanf("%d",&hi_min);
    printf("Digite a hora do final do jogo: ");
        scanf("%d",&hf_hora);
    printf("Digite os minutos do final do jogo: ");
        scanf("%d",&hf_min);

    tempo_inicio = hi_hora * 60 + hi_min - 1440; // 1440 � a quantidade de minutos de um dia.
    tempo_final = hf_hora * 60 + hf_min - 1440;
    tempo_inicio = tempo_inicio * (-1); //Transformando o valor em positivo multiplicando por -1.
    tempo_final = tempo_final *(-1); //Transformando o valor em positivo multiplicando por -1.

    duracao = tempo_inicio - tempo_final;
    // Como o valor do inicio est� positivo e o valor do final est� negativo,ent�o basta soma-los.

    duracao = duracao / 60;
    //Como o resultado da dura��o foi dado em minutos,basta dividir por 60 para transforma-lo em horas.

    if (tempo_final > tempo_inicio && duracao >0 && duracao <=24) {
        duracao = duracao * (-1); //Multiplica-se por -1 para deixar o valor positivo.
        printf("\n\n");
        printf("O jogo teve dura��o de %.2f horas.",duracao);
        printf("\n\n");
    }

    else if (tempo_inicio > tempo_final && duracao >0 && duracao <=24){
        printf("\n\n");
        printf("O jogo teve dura��o de %.2f horas.",duracao);
        printf("\n\n");
    }

    else {
        printf("\n\n");
        printf("O jogo n�o pode ter mais que 24 horas de dura��o.");
        printf("\n\n");
    }
}
