#include <stdio.h>
#include <stdlib.h>

int main() {
	const int n = 3;
	int i;
	float sal[n], media = 0, aumento = 1.0; // Inicialize aumento com 1.0

	for (i = 0; i < n; i++) {
		do {
			printf("\nDigite o salario %d: ", i + 1);
			scanf("%f", &sal[i]);
		} while (sal[i] <= 0);

		media += sal[i]; // Mova a linha para dentro do loop
		}
		printf("\nMedia = %.2f" ,media);

	if (media / n > 300) {
		aumento *= 1.15;
	} 
		else {
			aumento *= 1.1;
		}

	for (i = 0; i < n; i++) {
		sal[i] *= aumento;
		printf("\nSalario %d: %.2f", i+1, sal[i]);
	}

	return 0; // É uma boa prática retornar 0 no final da função main.
}

