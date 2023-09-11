#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int n1, n2;
	printf("Informe o numero 1:");
	scanf("%d" ,&n1);
	printf("Agora, informe o numero 2:");
	scanf("%d" ,&n2);

	if ( n1 > n2)
	{
		printf("O numero %d e maior do que o numero %d." ,n1,n2);
	}
		else if ( n2 > n1)
		{
			printf("O numero %d e maior do que o numero %d." ,n2,n1);
		}
			else{
				printf("Os dois numeros %d e %d sao iguais." ,n1,n2);
			}

}
