#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i=2;
	do{
		printf("\nDigite um numero: "); scanf("%d" ,&n);
	} while(n < 0);
	printf("\n");
	while(i<= sqrt(n)){
		if(n % i == 0) break;
		else i+=1;
	}
	if(i > sqrt(n) && n >=2){
		printf("\n%d e primo" ,n);
	}
	else{
		printf("\n%d nao e primo" ,n)
;	}
}
