#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float n1, n2, n3, n4, sum;
	printf("To see the final total of double values, inform their 4 numbers: ");
	printf("\nN1: ");
	scanf("%f" ,&n1);
	
	printf("N2: ");
	scanf("%f" ,&n2);
	
	printf("N3: ");
	scanf("%f" ,&n3);
	
	printf("N4: ");
	scanf("%f" ,&n4);
	
	sum = ((n1*2) + (n2*2) +(n3*2) + (n4*2));
	printf("Double values: %.2f, %.2f, %.2f, %.2f. \nSum of double values: %.2f", n1*2, n2*2, n3*2, n4*2, sum);
}
