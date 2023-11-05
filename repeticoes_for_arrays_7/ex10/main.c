#include <stdio.h>

main() {
	//criar matriz 1
	int i, j;
    //informar linhas i
	do{
		printf("\nInforme a quantidade de linhas da matriz: ");
    	scanf("%d", &i);
	} while( i <= 0);
    //informar colunas j 
	do{
     	printf("\nInforme a quantidade de colunas da matriz: ");
    	scanf("%d", &j);
	} while(j <= 0);


    int matriz[i][j];

    for (int row = 0; row < i; row++) {
        for (int col = 0; col < j; col++) {
            printf("\nInforme o valor para matriz %d x %d: ", row, col);
            scanf("%d", &matriz[row][col]);
        }
    }

    // Imprimir a matriz 1
    printf("\nMatriz 1:\n");
    for (int row = 0; row < i; row++) {
        for (int col = 0; col < j; col++) {
            printf("%d ", matriz[row][col]);
        }
        printf("\n");
    }
    

	//criaçao da matriz 2
	int a,b;
	do{
		printf("\nInforme a quantidade de linhas da matriz: ");
		scanf("%d", &a);
	} while (a <= 0);
	
	do{
		printf("\nInforme a quantidade de colunas da matriz: ");
		scanf("%d", &b);
	} while(b <= 0);
	
	int matriz[a][b];
	
	for(row_b = 0; row_b < a; row_b++){
		for(col_b = 0; col_b < b; col_b++){
			printf("\nInforme o valor da posicao %d x %d: ", matrix[a][b]); 
			scanf("%d", &matriz[row_b][col_b]);
		}
	}
	
	// Imprimir a matriz 2
    printf("\nMatriz 2:\n");
	for(row_b = 0; row_b < a; row_b++){
		for(col_b = 0; col_b < b; col_b++){
			printf("%d", matriz[row_b][col_b]);
		}printf("\n");
	}
	
	//verificar se matrizes sao compativeis
	if( j != a){
	 	printf("\nNao foi possivel realizar a multiplicacao de matrizes devido a sua incompatibilidade de dimensoes.");
	}
	 
	//multiplicar matrizes
	int resultado[i][b]
	for(int row = 0; row < i; row++){
		for( int col_b = 0; col_b < b; col_b++){
			resultado[row][col_b] = 0;
			for(int col = 0; col < j; col++){
				resultado[row][col_b] += matriz[row][col] * matriz[col][col_b];
			}
		}
	}
	//mostrar resultado
	printf("\nResultado da multiplicacao de matrizes: ");
	for(int row = 0; row < i; row++){
		for(int col_b = 0; col_b < b; col_b++){
			printf("%d", resultado[row][col_b]);
		} printf("\n");
	}
}


