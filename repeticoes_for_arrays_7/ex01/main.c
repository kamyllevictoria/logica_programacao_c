#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int v[5]; //declaramos o array
	int i,n;
	
	for( i = 0; i <= 5; i = i+ 1){
		printf("Informe o valor da posi��o %d: ", i); scanf("%d", &v[i]);
	}	
	printf("As posi��es pares s�o: ");
	for(i = 0; i <= 5; i+=2){
		printf("\nPosi��o: %d. \nValor informado: %d", i, v[i]); 
		//a posi��o � o valor de i
		//o conteudo de i � v[i]
	}
	
}
