#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int num, i;
	do{
		printf("Informe um numero e veja sua tabuada!");
		scanf("%d" ,&num);
	} while (num <= 0);
	for(i = 10; i >= 1; i--){
		printf("\n%d * %d = %d", num,i,num*i);
	}
}
