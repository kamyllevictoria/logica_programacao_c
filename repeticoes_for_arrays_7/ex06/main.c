#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe um numero para a posicao %d,%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos da coluna impar da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            
			if(j % 2 != 0){
    			printf("%d ", matriz[i][j]);
			}	
        }
        printf("\n");
    }

	
    return 0;
}

