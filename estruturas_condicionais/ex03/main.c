#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b ,c, delta, raiz1, raiz2;
	printf("Informe o valor de a: ");
	scanf("%d" ,&a);
	printf("Informe o valor de b: ");
	scanf("%d" ,&b);
	printf("Informe o valor de c: ");
	scanf("%d" ,&c);
	delta = b*b - 4*a*c;
	printf("The value of delta is: %d. " ,delta);
	if (delta < 0){
		printf("\nelta is not a valid integrer number, try again!");
	}
	else{
		printf("\nDelta is a valid integrer number!");
	}
	raiz1 = (-b + sqrt(delta))/(2 * a);
	raiz2 = (-b - sqrt(delta))/ (2 * a);
	printf("%d and %d" ,raiz1, raiz2);

}
