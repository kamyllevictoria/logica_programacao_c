#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	int i,n;
	
	do{
		printf("Informe o tamanho do vetor: "); scanf("%d", &n);
	} while(n <= 0);
	
	int v[n], maior;
	
	for(i = 0; i <= n; i++){
		printf("Informe o valor da posição %d: ", i); scanf("%d", &v[n]);
		if(i == 0){
			maior = v[n];
		} 
			else if(v[n] > maior){
				maior = v[n];
			}
	}
	printf("O maior valor da lista está na posição %d: %d.", v[n], maior);
}
