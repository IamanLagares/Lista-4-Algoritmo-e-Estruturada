#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste, novoSalario;

    printf("Digite o sal�rio mensal atual do funcion�rio: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    novoSalario = salarioAtual * (1 + percentualReajuste / 100);

    printf("O novo sal�rio do funcion�rio �: R$ %.2f\n", novoSalario);

    return 0;
}

