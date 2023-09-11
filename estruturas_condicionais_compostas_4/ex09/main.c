#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int n1, n2, op;
	printf("Informe o primeiro numero:");
	scanf("%d" ,&n1);
	printf("\nInforme o segundo numero: ");
	scanf("%d" ,&n2);
	printf("\nAgora informe a opcao matematica desejada: \n\t1-Adicao \n\t2-Subtracao \n\t3-Multiplicacao \n\t4-Divisao.");
	scanf("%d" ,&op);
	if (op == 1)
	{
		printf("%d + %d == %.1d" ,n1,n2,n1+n2);
	}
		else if (op == 2)
			{
				printf("%d - %d == %.1d" ,n1,n2,n1-n2);
			}
			else if (  op == 3)
				{
					printf("%d * %d == %.1d" ,n1,n2,n1*n2);
				}
				else if ( op == 4)
					{
						printf("%d %% %d == %.1d" ,n1,n2,n1%n2);
					}
					else{
						printf("Operacao invalida, tente novamente mais tarde!");
					}
}
