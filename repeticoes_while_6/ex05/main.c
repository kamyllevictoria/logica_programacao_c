#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, i;
	do{
		printf("Informe um numero e veja sua tabuada!");
		scanf("%d" ,&num);
	} while(num <0);
	for(i = 1; i <= 10; i++)
	{
		printf("\n%d * %d = %d" ,num,i,num*i);
	}
}

