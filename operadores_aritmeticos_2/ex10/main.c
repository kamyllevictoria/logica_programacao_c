#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float lucro, gasto, ganho;
	int dias;
	printf("Informe o gasto di�rio: ");
	scanf("%f" ,&gasto);
	printf("Informe o ganho di�rio: ");
	scanf("%f" ,&ganho);
	printf("Quantos dias a loja permanece aberta? ");
	scanf("%d" ,&dias);
	lucro = (ganho - gasto)*dias;
	printf("O lucro semanal � de: R$%.2f." ,lucro);
	
}
