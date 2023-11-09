#include <stdio.h>
#include <stdlib.h>

void imprime_matriz(float matriz[5][10]) {
    int i, j;
    printf("\nNotas por disciplina:\n");
    for (i = 0; i < 5; i++) {
        printf("Disciplina %d: ", i);
        for (j = 0; j < 10; j++) {
            printf("%0.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz[5][10];
    int i, j;

    for (i = 0; i < 5; i++) {
        printf("Disciplina %d:\n", i);
        for (j = 0; j < 10; j++) {
            printf("Aluno %d: ", j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    imprime_matriz(matriz);

    return 0;
}

