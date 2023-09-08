#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int num;
	printf("Enter a number: ");
	scanf("%d" ,&num);
	if (num % 2 == 0){
		printf("Its a pair number.");
	}
	else{
		printf("Its a odd number.");
	}
}
