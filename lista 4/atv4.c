#include <stdio.h>

int main() {
    float custo_fabrica, custo_consumidor;
    const float percent_distribuidor = 0.28;
    const float percent_impostos = 0.45;

    printf("Digite o custo de f�brica do carro: ");
    scanf("%f", &custo_fabrica);

    custo_consumidor = custo_fabrica * (1 + percent_distribuidor + percent_impostos);

    printf("O custo final do carro ao consumidor � de R$%.2f\n", custo_consumidor);

    return 0;
}

