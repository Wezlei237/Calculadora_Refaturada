#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "calculadora.h"

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Erro: divisão por zero!\n");
        return 0;
    }
    return a / b;
}

bool obter_dados(float *a, float *b, char *op) {
    printf("Digite o primeiro valor: ");
    if (scanf("%f", a) != 1) {
        printf("Entrada inválida!\n");
        return false;
    }

    printf("Digite o segundo valor: ");
    if (scanf("%f", b) != 1) {
        printf("Entrada inválida!\n");
        return false;
    }

    printf("Digite a operação (+ - * /): ");
    getchar();
    *op = getchar();

    return true;
}

int main(void) {
    float num1, num2, resultado = 0;
    char op;

    if (!obter_dados(&num1, &num2, &op)) {
        printf("Erro na entrada de dados.\n");
        return 1;
    }

    switch (op) {
        case '+':
            resultado = soma(num1, num2);
            break;
        case '-':
            resultado = subtrai(num1, num2);
            break;
        case '*':
            resultado = multiplica(num1, num2);
            break;
        case '/':
            resultado = divide(num1, num2);
            break;
        default:
            printf("Operação inválida.\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
