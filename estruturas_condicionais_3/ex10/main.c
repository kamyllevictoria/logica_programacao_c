#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int habitantes;
	float inv15, inv20, salario;
	printf("Informe o salario base da cidade: ");
	scanf("%f" ,&salario);
	printf("Informe o total de habitantes da cidade: ");
	scanf("%d" ,&habitantes);
	if (habitantes <= 10.000){
		inv15 = salario + (salario * 0.15);
		printf("O salario base deveria ter um aumento de 15%%, passando de R$%.2f para R$%.2f." , salario, inv15);
	}
	else{
		inv20 = salario + (salario * 0.2);
		printf("O salario base deveria ter um aumento de 20%%, passando de R$%.2f para R$%.2f." , salario, inv20);

	}
}
