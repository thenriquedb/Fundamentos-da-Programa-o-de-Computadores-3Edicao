/*
7) Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmé-
tica desses valores. Terminar a entrada de dados com o valor zero.
 */

#include <stdio.h>
#include <stdlib.h>

void MediaAritimetica() {
    float num, soma = 0, media;
    int cont = 0;
  
    do {
        printf("Digite o %d número: ", cont + 1);
        scanf("%f", &num);
        soma += num;
        if (num != 0) {
            cont++;
        }
    } while (num != 0);
    
    media = soma / cont;
    printf("\nMedia dos valores digitados: %.2f. \n", media);
}

int main(int argc, char** argv) {
    MediaAritimetica();
    return (EXIT_SUCCESS);
}