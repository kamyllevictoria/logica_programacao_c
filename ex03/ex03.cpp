#include<stdio.h>
main(){
	float P1;
	float P2;
	float S;
	float D1;
	float D2;
	
	printf("Informe o valor do produto 1: ");
	scanf("%f" ,&P1);
	
	printf("Informe o valor do produto 2: ");
	scanf("%f" ,&P2);
	S = P1 + P2;
	D1 = P1 - (P1 * 0.08);
	D2 = P2 - (P2 * 0.12);
	printf("A soma dos produtos e dada por: %.2f" ,S);
	printf("\nO desconto de 8%% no produto 1, gera um custo final de: %.2f" ,D1);
	printf("\nO desconto de 12%% no produto 2, gera um custo final de: %.2f" ,D2);
	
}
