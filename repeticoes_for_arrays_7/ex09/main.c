#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//criaçao da primeira matriz
	//a = linhas b = colunas
	int a,b;
	do{
		printf("Informe a quantidade de linhas da matriz: ");
		scanf("%d" ,&a);
	} while (a <= 0);
	
	do{
		printf("Informe a quantidade de colunas da matriz: ");
		scanf("%d" ,&b);
	} while(b <= 0);
	
	int matriz [a][b];
	
	for(int row_a = 0; row_a < a; row_a++){
		for(int col_a = 0; col_a < b; col_a++){
			printf("\nInforme o valor da matriz na posicao %d x %d: ", matriz[a][b]);
			scanf("%d", matriz[row_a][col_a]);
		}
	}
	
	for(int row_a = 0; row_a < a; row_a++){
		for(int col_a = 0; col_a < b; col_a++){
			printf("\n%d: ", matriz[row_a][col_a]);
		} printf("\n");
	}
}
