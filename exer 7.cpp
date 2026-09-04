#include <stdio.h>

int main() {
    float a, b;

    scanf("%f %f", &a, &b);

    if (a > b)
        printf("%.2f\n", a);
    else if (b > a)
        printf("%.2f\n", b);
    else
        printf("Numeros iguais\n");

    return 0;
}
