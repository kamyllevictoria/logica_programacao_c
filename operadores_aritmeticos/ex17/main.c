#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int n1, n2;
	
	printf("Informe um numero para ve-lo invertido! ");
	
	printf("\nValor de A: ");
	scanf("%d" ,&n1);
	
	printf("\nValor de B: ");
	scanf("%d" ,&n2);
	
	n1 = n2;
	n2 = n1;
	
	printf("\nO valor invertido de a e: %d" ,n2);
	printf("\nO valor invertido de b e: %d" ,n1);
	
}
