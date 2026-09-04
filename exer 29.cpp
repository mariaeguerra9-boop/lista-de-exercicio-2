#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, resposta, correta;
    int acertos = 0;
    int i;

    srand(time(NULL));

    for (i = 1; i <= 5; i++) {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
        correta = a + b;

        printf("Qual e a soma de %d + %d? ", a, b);
        scanf("%d", &resposta);

        printf("Resposta correta: %d\n", correta);

        if (resposta == correta) {
            printf("Acertou!\n");
            acertos++;
        } else {
            printf("Errou!\n");
        }
    }

    printf("Voce acertou %d de 5 perguntas.\n", acertos);

    return 0;
}
