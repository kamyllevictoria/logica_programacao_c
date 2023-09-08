#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	float num;
	printf("Inform a number: ");
	scanf("%f" ,&num);
	if (num <0){
		printf("Its a negative number. ");
	}
	else{
		printf("Its a positive number.");
	}
}
