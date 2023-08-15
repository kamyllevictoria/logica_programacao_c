#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//area de um triangulo

void main(void) {
	float base, altura;
	printf("To find the area of the triangle, enter its base and height: ");
	
	printf("\nBase: ");
	scanf("%f" ,&base);
	
	printf("\nHeigth: ");
	scanf("%f" ,&altura);
	
	printf("\nThe area of the right triangle is given by: %.2f" ,(base*altura)/2);
}
