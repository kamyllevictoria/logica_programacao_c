#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int hotDog, pizza, soda, fries;
	float total ,totalh, totalp, totals, totalf;
	printf("Hello, welcome to the Nina's restaurant,this is our menu: \nHotDog, Pizza, Soda, Fries. \nWhat do you'd like to eat?");

	printf("\nHotDog: ");
	scanf("%d", &hotDog);
	
	printf("\nPizza: ");
	scanf("%d", &pizza);
	
	printf("\nSoda: ");
	scanf("%d", &soda);
	
	printf("\nFries: ");
	scanf("%d", &fries);
	
	total = ((hotDog * 10) + (pizza*30) + (soda * 5) + (fries*12));
	totalh = (hotDog * 10); totalp = (pizza * 30); totals = (soda * 5); totalf = (fries * 12);
	//printf("\nHotDog: %d \nPizza: %d  \nSoda: %d  \nFries: %d " ,hotDog, pizza, soda, fries);
	printf("\nHotDog: %d * R$10.00 = %.2f " ,hotDog, totalh);
	printf("\nPizza: %d * R$30.00 = %.2f" ,pizza, totalp);
	printf("\nSoda: %d * R$5.00 = %.2f" ,soda, totals);
	printf("\nFries: %d * R$12.00 = %.2f" ,fries, totalf);
	printf("\nAmount to pay: R$%.2f" ,total);
}
