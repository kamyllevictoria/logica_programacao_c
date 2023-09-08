#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
	int anos;
	float salario;
	printf("Quantos anos de trabalho voce possui na empresa? ");
	scanf("%f" ,&anos);
	printf("Qual e o seu atual salario? ");
	scanf("%f" ,&salario);
	if (anos <= 5){
		printf("Voce recebeu um aumento de 5%% sobre seu salario de R$%.2f, logo, voce passara a receber R$.2f." ,salario, salario*1.05);
	} 
		else if( anos <= 10)
		{
			printf("Voce recebeu um aumento de 10%% sobre seu salario de R$%.2f, logo, voce passara a receber R$%.2f", salario, salario*1.1);
		}
			else if( anos <= 15)
			{
				printf("Voce recebeu um aumento de 15%% sobre seu salario de R$%.2f, logo, voce passara a receber R$%.2f." ,salario, salario*1.2);
			}
				else if( anos > 20)
				{
					printf("Voce recebeu um aumento de 25%% sobre seu salario de R$%.2f, logo, voce passara a receber R$%.2f." ,salario, salario*1.25);
				}
					else 
					{
						printf("Voce recebeu um aumento de 30%% sobre seu salario de R$%.2f, logo, voce passara a receber R$%.2f." ,salario, salario*1.30);
					}
}
