#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float pb, ps;
	int opc;
	char sobremesa;
	printf("Informe o valor base dos pratos executivos do restaurante: ");
	scanf("%f" ,&pb);
	printf("\nTemos as seguintes opcoes de acompanhamentos: \n\t1-Peixe \n\t2-Carne \n\t3-Frango \n\t4-Vegetariano \nQual voce deseja?");
	scanf("%d" ,&opc);
	printf("\nDeseja sobremesa?"); fflush(stdin);
	scanf("%c" ,&sobremesa);
	if (opc == 1){
		printf("\nO prato com peixe custara R$%.2f." ,pb*1.05);
			if(sobremesa == 's')
			{
				printf("\nO total da refeicao com a sobremesa e de R$%.2f." ,pb*1.05);
			}
				else{
					printf("Sem sobremesa.");
				}
	}
}
