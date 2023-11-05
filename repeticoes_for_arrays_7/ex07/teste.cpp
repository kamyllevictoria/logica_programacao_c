#include <stdio.h>

int main() {
    int i, j;
    //informar linhas i
	do{
		printf("Informe o valor das linhas da matriz: ");
    	scanf("%d", &i);
	} while( i <= 0);
    //informar colunas j 
	do{
     	printf("Informe o valor das colunas da matriz: ");
    	scanf("%d", &j);
	} while(j <= 0);


    int matriz[i][j];

    for (int row = 0; row < i; row++) {
        for (int col = 0; col < j; col++) {
            printf("Informe o valor para matriz %d x %d: ", row, col);
            scanf("%d", &matriz[row][col]);
        }
    }

    // Imprimir a matriz
    printf("Matriz:\n");
    for (int row = 0; row < i; row++) {
        for (int col = 0; col < j; col++) {
            printf("%d ", matriz[row][col]);
        }
        printf("\n");
    }

    return 0;
}


