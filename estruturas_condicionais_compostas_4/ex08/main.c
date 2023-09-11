#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int n1,n2,n3;
	printf("Informe o numero 1:");
	scanf("%d" ,&n1);
	printf("Informe o numero 2:");
	scanf("%d" ,&n2);
	printf("Informe o numero 3:");
	scanf("%d" ,&n3);
	if (n1 > n2 && n1 > n3)
		{
			printf("%d, %d, %d",n1,n2,n3);
		}
			else if(n1 > n2 && n3 > n2)
			{
				printf("%d, %d, %d." ,n1,n3,n2);
			}
}
