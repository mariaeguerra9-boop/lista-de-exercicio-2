#include <stdio.h>

int main() {
    float salario, prestacao;

    scanf("%f %f", &salario, &prestacao);

    if (prestacao > salario * 0.20)
        printf("Emprestimo nao concedido\n");
    else
        printf("Emprestimo concedido\n");

    return 0;
}
