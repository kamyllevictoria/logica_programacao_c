#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	float C;
	float F;
	printf("To perform the conversion from Celcius temperature to Fahrenheit, enter a value: ");
	scanf("%f" ,&C);
	
	F = ((9*C) + 160)/5;
	
	printf("The temperature from celcius to fahrenheit is: %.2f" ,F);
}
