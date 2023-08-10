#include<stdio.h>
main(){
	float salario;
	float aumento;
	float desconto;
	printf("Inform your current salary: ");
	scanf("%f" ,&salario);
	aumento = salario + 100;
	desconto = salario - (salario * 0.15);
	printf("Your current salary with as a raise of 100 dolars is: %.2f" ,aumento);
	printf("\nYour salary with as a decrease of 15%% is: %.2f" ,desconto);
}
