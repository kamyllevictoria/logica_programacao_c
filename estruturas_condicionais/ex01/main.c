#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	float salario, aumento6, aumento8;
	printf("Right, now, inform your salary: ");
	scanf("%f" ,&salario);
	if(salario == 5000){
		aumento6 = salario + (salario * 0.06);
		printf("Your salary of R$%.2f will receive a 6%% increase, and will become R$%.2f." ,salario, aumento6);
	} 
	else{
		aumento8 = salario + (salario * 0.08);
		printf("Your salary of R$%.2f will receive a 8%% increase, and will become R$%.2f." ,salario, aumento8);		
	}
	return 0;
}
