#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b ,c, delta, raiz1, raiz2;
	printf("Informe o valor de a: ");
	scanf("%d" ,&a);
	if (a == 0){
		printf("Operacao invalida, tente novamente mais tarde.");
	}
	else{
		printf("Informe o valor de b:");
		scanf("%d" ,&b);
		printf("Informe o valor de c: ");
		scanf("%d" ,&c);
		delta = b*b - 4*a*c;
		if(delta == 0){
			raiz1 = -b / (2*a);
			printf("As raizes de um delta igual a zero sao iguais.\nRaiz 1:%d \nRaiz 2: %d.", raiz1, raiz1);
		}
		else{
			raiz1 = -b + sqrt(delta)/ (2*a);
			raiz2 = -b - sqrt(delta)/ (2*a);
			printf("As raizes do delta sao dadas por: \nRaiz 1: %d \nRaiz2: %d." ,raiz1, raiz2);
		}
	}
}
