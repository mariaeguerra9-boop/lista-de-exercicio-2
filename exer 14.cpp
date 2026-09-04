#include <stdio.h>

int main() {
    float laboratorio, semestral, exame, media;

    scanf("%f %f %f", &laboratorio, &semestral, &exame);

    if (laboratorio < 0 || laboratorio > 10 ||
        semestral < 0 || semestral > 10 ||
        exame < 0 || exame > 10) {
        printf("Nota invalida\n");
        return 0;
    }

    media = (laboratorio * 2 + semestral * 3 + exame * 5) / 10;

    printf("Media: %.2f\n", media);

    if (media < 3)
        printf("Reprovado\n");
    else if (media < 5)
        printf("Recuperacao\n");
    else
        printf("Aprovado\n");

    return 0;
}
