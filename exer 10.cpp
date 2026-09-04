#include <stdio.h>

int main() {
    float altura, peso;
    char sexo;

    scanf("%f %c", &altura, &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
        printf("Peso ideal: %.2f kg\n", peso);
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2f kg\n", peso);
    } else {
        printf("Sexo invalido\n");
    }

    return 0;
}
