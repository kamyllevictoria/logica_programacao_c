#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, exp, result = 1;

    printf("Informe um número para calcular sua potência: ");
    scanf("%d", &num);
    printf("Agora informe seu expoente: ");
    scanf("%d", &exp);

    if (exp == 0) {
        printf("Todo número elevado à 0 é igual a 1.\n");
    } else if (exp < 0) {
        result = 1;
        for (int i = 0; i > exp; i--) {
            result *= num;
        }
        printf("%d^%d = 1/%d\n", num, exp, result);
    } else {
        result = 1;
        for (int i = 0; i < exp; i++) {
            result *= num;
        }
        printf("%d^%d = %d\n", num, exp, result);
    }

    return 0;
}

