#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int v[5]; //declaramos o array
	int i,n;
	
	for( i = 0; i <= 5; i = i+ 1){
		printf("Informe o valor da posição %d: ", i); scanf("%d", &v[i]);
	}	
	printf("As posições pares são: ");
	for(i = 0; i <= 5; i+=2){
		printf("\nPosição: %d. \nValor informado: %d", i, v[i]); 
		//a posição é o valor de i
		//o conteudo de i é v[i]
	}
	
}
