#include <stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
        scanf("%f %f", &a, &b);

        switch (opcao) {
            case 1:
                resultado = a + b;
                printf("%.2f\n", resultado);
                break;

            case 2:
                resultado = a - b;
                printf("%.2f\n", resultado);
                break;

            case 3:
                resultado = a * b;
                printf("%.2f\n", resultado);
                break;

            case 4:
                if (b == 0)
                    printf("Divisao por zero\n");
                else {
                    resultado = a / b;
                    printf("%.2f\n", resultado);
                }
                break;
        }
    } else {
        printf("Opcao invalida\n");
    }

    return 0;
}
