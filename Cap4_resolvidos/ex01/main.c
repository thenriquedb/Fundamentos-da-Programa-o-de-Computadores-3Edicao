    /* Fundamentos da Programa��o de computadores
    Capitulo 4 -  Condicionais Exercios Resolvidos

    01)  A nota final de um estudante � calculada a partir de tr�s notas atribu�das, respectivamente, a um trabalho
    de laborat�rio, a uma avalia��o semestral e a um exame final. A m�dia das tr�s notas mencionadas
    obedece aos pesos a seguir: */

#include <stdio.h>
#include <locale.h> //Biblioteca locale � uitlizada para definar o idioma do programa.
int main()
{
    setlocale(LC_ALL,"portuguese"); //Comando utilizado para caracteres especiais aparecem.
    float n1,n2,n3,media,conceito;

    printf("CONCEITO DO ALUNO \n \n");

    printf("Digite a nota do trabalho de lab�ratorio: ");
        scanf("%f",&n1);
    printf("Digite a nota da avalia��o semestral: ");
        scanf("%f",&n2);
    printf("Digite a nota do exame final: ");
        scanf("%f",&n3);

    printf("\n \n");

    printf("O calculo da media sera realizado usando os seguintes pesos:\n \n");
        printf("        Trabalho de laborat�rio: Peso 2 \n");
        printf("        Avalia��o semestral: Peso 3 \n");
        printf("        Exame final: Peso 5 \n\n");

    //Calculo
    media=(n1*2)+(n2*3)+(n3*5);
    conceito=media / 10;
    //

//Inicio das condicionais

    if ((conceito >= 0) && (conceito < 5)) { // IF = Se - Se a condi��o for
         printf("Sua nota final � %.2f pontos portanto seu conceito ser� E \n \n",conceito);
    }
    else if ((conceito >= 5) && (conceito < 6)) { // Se ent�o
        printf("Sua nota final � %.2f pontos portanto seu conceito ser� D \n \n",conceito);
    }
     else if ((conceito >= 6) && (conceito < 7)) { // Se ent�o
        printf("Sua nota final � %.2f pontos portanto seu conceito ser� C \n \n",conceito);
    }
     else if ((conceito >= 7) && (conceito < 8)) { // Se ent�o
        printf("Sua nota final � %.2f pontos portanto seu conceito ser� B \n \n",conceito);
    }
     else if ((conceito >= 8)) { // Se ent�o
        printf("Sua nota final � %.2f pontos portanto seu conceito ser� A \n \n",conceito);
    }
// Fim das condicionais
system("pause");
return 0;
}
