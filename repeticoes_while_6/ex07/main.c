#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, totalp;
    float total = 0, tot7 = 0, tot7_12 = 0, tot12_17 = 0, tot18 = 0;

    printf("Informe a quantidade de lugares disponíveis no ônibus: ");
    scanf("%d", &x);

    printf("\nInforme o valor de cada passagem: ");
    scanf("%d", &y);

    printf("\nDigite o total de passageiros: ");
    scanf("%d", &totalp);

    for (int i = 0; i < totalp; i++) {
        int idade;
        printf("Digite a idade do passageiro %d: ", i + 1);
        scanf("%d", &idade);

        float valorp;

        if (idade < 7) {
            valorp = y;
            tot7 += valorp;
        } else if (idade >= 7 && idade < 12) {
            valorp = y * 1.1;
            tot7_12 += valorp;
        } else if (idade >= 12 && idade <= 17) {
            valorp = y * 1.2;
            tot12_17 += valorp;
        } else if (idade > 17) {
            valorp = y * 1.3;
            tot18 += valorp;
        }
        total += valorp;
    }

    printf("\nArrecadação total: %.2f\n", total);
    printf("Passageiros abaixo de 7 anos: %.2f\n", tot7);
    printf("Passageiros de 7 a 12 anos: %.2f\n", tot7_12);
    printf("Passageiros de 12 a 17 anos: %.2f\n", tot12_17);
    printf("Passageiros com mais de 17 anos: %.2f\n", tot18);

    return 0;
}


