#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int n1;
	float num, dec;
	printf("Informe um valor:");
	scanf("%f" ,&num);
	n1 = num;
	printf("A parte inteira de %.2f e dada por: %d." ,num,n1);
}
