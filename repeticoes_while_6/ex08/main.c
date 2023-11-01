#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int a, b, total = 1;

    setlocale(LC_ALL, "Portuguese");

    do {
        printf("Informe o valor de a: ");
        scanf("%d", &a);
    } while (a <= 0);

    printf("Informe o valor de b: ");
    scanf("%d", &b);

    if (b == 1) {
        printf("Todo número elevado à 1 equivale a ele mesmo: %d\n", a);
    } else if (b == 0) {
        printf("Todo número elevado à 0 equivale a 1.\n");
    } else if (b < 0) {
        total = 1;
        int i = 0;
        while (i > b) {
            total *= a;
            i--;
        }
        printf("%d ^ %d = 1/%d\n", a, b, total);
    } else {
        total = 1;
        int i = 0;
        while (i < b) {
            total *= a;
            i++;
        }
        printf("%d ^ %d = %d\n", a, b, total);
    }

}


