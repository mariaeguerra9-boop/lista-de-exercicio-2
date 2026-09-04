#include <stdio.h>

int main() {
    int n, soma = 0;

    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido\n");
        return 0;
    }

    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }

    printf("%d\n", soma);

    return 0;
}
