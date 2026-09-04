#include <stdio.h>
#include <math.h>

int main() {
    float n;

    scanf("%f", &n);

    if (n >= 0)
        printf("%.2f\n", sqrt(n));
    else
        printf("%.2f\n", n * n);

    return 0;
}
