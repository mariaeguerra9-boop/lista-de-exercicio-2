#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    scanf("%f %f", &distancia, &litros);

    if (litros <= 0) {
        printf("Quantidade de litros invalida\n");
        return 0;
    }

    consumo = distancia / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8)
        printf("Venda o carro!\n");
    else if (consumo <= 14)
        printf("Economico!\n");
    else
        printf("Super economico!\n");

    return 0;
}
