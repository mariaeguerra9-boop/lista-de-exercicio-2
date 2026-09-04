#include <stdio.h>

int main() {
    float n1, n2, media;

    scanf("%f %f", &n1, &n2);

    if (n1 < 0 || n1 > 10) {
        printf("Nota 1 invalida\n");
        return 0;
    }

    if (n2 < 0 || n2 > 10) {
        printf("Nota 2 invalida\n");
        return 0;
    }

    media = (n1 + n2) / 2;

    printf("Media: %.2f\n", media);

    return 0;
}
