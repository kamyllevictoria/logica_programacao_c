#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b, resto;
	do{
		printf("Informe o valor de a: "); scanf("%d" ,&a);
		printf("Informe o valor de b: "); scanf("%d" ,&b);
	} while(b > a); //nao pode ocorrer isso, caso ocorra, solicita varias vezes a entrada de dados
	resto = a % b;
	while(resto != 0){
		a = b;
		b = resto;
		resto = a % b;
	}
	printf("\nMDC entre %d e %d = %d" ,a,b,b);
	
}
