#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	float value1, value2;
	//aqui ja estabelecemos um valor padrao, a seguir, iremos pedir os valores ao usuario
	//printf("The final sum is %.2f" , 10 + 10.2);
	printf("Inform the first value: ");
	scanf("%f" ,&value1);
	printf("Now, the second value: ");
	scanf("%f" ,&value2);
	printf("The final weighted average is: %.2f" ,((value1*1)+(value2*2))/2);
}
