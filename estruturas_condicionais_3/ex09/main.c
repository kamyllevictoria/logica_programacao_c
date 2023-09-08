#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int n1, n2, p, d;
	printf("Informe o numero 1:");
	scanf("%d" ,&n1);
	printf("Informe o numero 2:");
	scanf("%d" ,&n2);
	
	if (n1 < 0){
		n1 = -n1;
	}
	if (n2 < 0){
		n2 = -n2;
	}
	p = n1 * n2;
	
	if (sqrt(p) == (int) sqrt(p)){
		printf("Os numeros %d e %d sao quadrados perfeitos e sua raiz e dada por %d.", n1,n2,p);
	}
	else{
		printf("os numeros %d e %d nao sao quadrados perfeitos." ,n1,n2);
	}
	return 0;
	
}
