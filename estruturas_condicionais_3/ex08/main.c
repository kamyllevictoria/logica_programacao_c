#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	int idade;
	printf("Inform your age: ");
	scanf("%d" ,&idade);
	if (idade < 18){
		int idade18;
		idade18 = 18 - idade;
		printf("You're not 18 years, just %d. You need more %d years to be." ,idade, idade18);
	}
	else{
		int idade_maior;
		idade_maior = idade - 18;
		printf("You're %d, to be 18 years again, you need to go back %d years." ,idade, idade_maior)
	}
}
