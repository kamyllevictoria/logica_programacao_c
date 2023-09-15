#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float salario;
	int idade, anos;
	char nome;
	printf("Ola, seja bem vindo, gostariamos de saber algumas informacoes basicas para avaliar seu salario atual em nossa empresa.");
	printf("\nPor favor, digite seu nome: "); scanf("%c" ,&nome); fflush(stdin);
	printf("\nDigite sua idade: "); scanf("%d" ,&idade);
	printf("\nInforme quantos anos voce trabalha na empresa: "); scanf("%d" ,&anos);
	printf("\nAgora informe seu atual salario: "); scanf("%f" ,&salario);
	if (anos < 10 && idade < 35)
	{
		printf("%c, voce recebera um aumento de 5%%, logo, seu salario sera de R$%.2f." ,nome,salario*1.05);
	}
		else if ( anos > 15 && anos < 20 && idade > 40)
			{
				printf("Voce recebera um aumento de 20%%, logo, seu salario sera de R$%.2f." ,salario*1.20);
			}
				else{
					printf("Voce recebera um aumento de 10%%, logo, seu salario sera de R$%.2f." ,salario*1.10);
				}
}
