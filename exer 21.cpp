#include <stdio.h>

int main() {
    int opcao;
    float a, b;

    printf("1 - Soma de 2 numeros\n");
    printf("2 - Diferenca entre 2 numeros\n");
    printf("3 - Produto entre 2 numeros\n");
    printf("4 - Divisao entre 2 numeros\n");

    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida\n");
        return 0;
    }

    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1:
            printf("%.2f\n", a + b);
            break;

        case 2:
            if (a > b)
                printf("%.2f\n", a - b);
            else
                printf("%.2f\n", b - a);
            break;

        case 3:
            printf("%.2f\n", a * b);
            break;

        case 4:
            if (b == 0)
                printf("Denominador nao pode ser zero\n");
            else
                printf("%.2f\n", a / b);
            break;
    }

    return 0;
}
