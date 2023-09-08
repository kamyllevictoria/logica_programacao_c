#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int num, d, i, ni;
	printf("Informe um numero e veja-o invertido:");
	scanf("%d" ,&num);
	d = num/10;
	i = num%10;
	ni = i*10 + d;
	printf("\nO inverso de %d e %d" ,num,ni);
}
