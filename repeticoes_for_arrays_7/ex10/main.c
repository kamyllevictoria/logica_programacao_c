#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int i, j;
    srand(time(NULL));
	printf("\nGerando matriz 5x5 com numero aleatorios...\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

