#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main (void) {
	float num;
	printf("Type a number and see its double!");
	scanf("%f" ,&num);
	printf("\nInformed number: %.2f" ,num);
	printf("\nDouble number: %.2f" ,num*2);
}
