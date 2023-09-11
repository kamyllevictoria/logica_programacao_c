#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int n1,n2,n3;
	printf("Informe o valor de N1: ");
	scanf("%d" ,&n1);
	printf("Informe o valor de N2: ");
	scanf("%d" ,&n2);
	printf("Informe o valor de N3: ");
	scanf("%d" ,&n3);
	if (n1 > n2 && n1 > n3)
		{
			printf("O numero n1 == %d e o maior." ,n1);
		}
		else if (n2 > n1 && n2 > n3)
			{
				printf("O numero n2 == %d e o maior" ,n2);
			}
				else
				{
					printf("O numero n3 == %d e o maior" ,n3);
				}
}
