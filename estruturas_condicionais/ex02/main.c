#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(void) {
	float desconto12, desconto15, valor, valor12, valor15;
	int dia;
	printf("Enter the day of the computer purchase: ");
	scanf("%d" ,&dia);
	printf("Inform how much it coast: ");
	scanf("%f" ,&valor);
	if(dia <= 15){
		desconto15 = valor - (valor * 0.15);
		valor15 = valor - desconto15;
		printf("If the purchase it was done until the 15th, the discount on the product of R$%.2f would be R$%.2f, so, the total will be: R$%.2f." ,valor, valor15, desconto15);
	}
	else if (dia <=30){
		desconto12 = valor - (valor * 0.12);
		valor12 = valor - desconto12;
		printf("If the purchase it was done until the 30th, the discount on the product of R$%.2f would be R$%.2f, so, the total will be: R$%.2f." ,valor, valor12, desconto12);
	}
	else{
		printf("The product dont have any descounts.");
	}
	return 0;
}
