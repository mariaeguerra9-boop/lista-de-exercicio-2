#include <stdio.h>

int main() {
    float baseMaior, baseMenor, altura, area;

    scanf("%f %f %f", &baseMaior, &baseMenor, &altura);

    if (baseMaior > 0 && baseMenor > 0 && altura > 0) {
        area = ((baseMaior + baseMenor) * altura) / 2;
        printf("Area: %.2f\n", area);
    } else {
        printf("Valores invalidos\n");
    }

    return 0;
}
