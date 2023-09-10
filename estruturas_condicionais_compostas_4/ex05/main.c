#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int codigo;
	int valor_base = 80;
	printf("Informe o codigo do livro e veja se possui algum desconto!");
	scanf("%d" ,&codigo);
	if (codigo < 1){
		printf("O livro nao possui desconto algum, pois nao esta cadastrado no sistema.");
	}
	else if (codigo <= 30)
		{
			printf("O codigo informado %d pertence a um livro de suspense, logo, possui um desconto de 6%%, custando apenas R$%.2f", codigo, valor_base-(valor_base * 0.06));
		}
		else if (codigo <= 45)
			{
				printf("O codigo informado %d pertence a um livro de terror, logo, possui um desconto de 8%%, custando apenas R$%.2f", codigo, valor_base-(valor_base * 0.08));
			}
			else if (codigo <= 60)
				{
					printf("O codigo informado %d pertence a um livro de biografia, logo, possui um desconto de 12%%, custando apenas R$%.2f", codigo, valor_base-(valor_base * 0.12));
				}
				else if (codigo > 60)
					{
						printf("O codigo informado %d pertence a um livro de didática, logo, possui um desconto de 15%%, custando apenas R$%.2f", codigo, valor_base-(valor_base * 0.15));
					}
	
}
