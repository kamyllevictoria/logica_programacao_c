#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int ano;
	printf("Informe o ano e veja se o mesmo e bissexto ou nao.");
	scanf("%d" ,&ano);
	if (( ano % 4 == 0 && ano % 100!= 0) || ( ano % 400 == 0)){
		printf("\nAno e bissexto");
	}
	else{
		printf("\nAno nao bissexto.");
	}

}
