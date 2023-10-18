#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");
    int a1, a2;
    printf("Informe dois valores e veja quantos anos são bissextos entre eles!\n");
    printf("Ano 1: ");
    scanf("%d", &a1);
    printf("Ano 2: ");
    scanf("%d", &a2);

    while (a1 >= a2) {
        printf("\nO valor do segundo ano deve ser maior do que o primeiro para realizarmos a comparação!");
        printf("Ano 1: ");
        scanf("%d", &a1);
        printf("Ano 2: ");
        scanf("%d", &a2);
    }

    printf("Anos bissextos entre %d e %d: ", a1, a2);

    for (int year >= a1; year <= a2; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
    }

    return 0;
}

