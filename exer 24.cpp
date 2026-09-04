#include <stdio.h>

int main() {
    float valor, imposto, final;
    char estado[3];

    scanf("%f", &valor);
    scanf("%2s", estado);

    if (estado[0] == 'M' && estado[1] == 'G')
        imposto = 0.07;
    else if (estado[0] == 'S' && estado[1] == 'P')
        imposto = 0.12;
    else if (estado[0] == 'R' && estado[1] == 'J')
        imposto = 0.15;
    else if (estado[0] == 'M' && estado[1] == 'S')
        imposto = 0.08;
    else {
        printf("Estado invalido\n");
        return 0;
    }

    final = valor + valor * imposto;

    printf("Preco final: R$ %.2f\n", final);

    return 0;
}
