#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int n1, n2, n3;
	printf("N1: "),
	scanf("%d" ,&n1);
	
	printf("N2: "),
	scanf("%d" ,&n2);
	
	printf("N3: "),
	scanf("%d" ,&n3);
	if(n1 > n2){
		int temp = n1;
		n1 = n2;
		temp = n2;
	}
	if(n2 > n3){
		int temp = n2;
		n2 = n3;
		temp = n3;		
	}
	if(n3 > n1){
		int temp = n3;
		n3 = n1;
		n1 = temp;
	}
	printf("Numeros em ordem crescente: %d %d %d" ,n1,n2,n3);
}//pedir ajuda para o professor, duvida no ex 7.
