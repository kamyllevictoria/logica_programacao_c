#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include<stdio.h>
main()
{
	float pb, pf; int op;
	char sobremesa;
	printf("\nDigite o item do cardapio: \n\t1-Peixe \n\t2-Carne bovina \n\t3-Frango \n\t4-Vegetariano: ");
	scanf("%d",&op);
	printf("\nQual o preco basico do restaurante? ");
	scanf("%f",&pb);
	printf("\nDeseja sobremesa? (s/n): ");
	fflush(stdin); scanf("%c",&sobremesa);
	if (op==1)
	{
		pf = pb * 1.1;
		printf("\n\tPeixe - R$ %.2f",pf);
		if (sobremesa=='s') 
		{
			pf = pf + 0.05 * pb;
			printf("\n\tCom sobremesa = R$ %.2f",pf);
		}
	}
	else if (op==2)
		 	{
				pf = pb * 1.2;
				printf("\n\tCarne bovina - R$ %.2f",pf);
				if (sobremesa=='s') 
				{
					pf = pf + 0.05 * pb;
					printf("\n\tCom sobremesa = R$ %.2f",pf);
				}
		 	}
		 	else if (op==3)
		 		 {
					pf = pb * 1.15;
					printf("\n\tFrango - R$ %.2f",pf);
					if (sobremesa=='s') 
					{
						pf = pf + 0.05 * pb;
						printf("\n\tCom sobremesa = R$ %.2f",pf);
					}
		 		 }
		 		 else if (op==4)
		 			  {
							pf = pb * 1.05;
							printf("\n\tVegetariano - R$ %.2f",pf);
							if (sobremesa=='s') 
							{
								pf = pf * pf + 0.05 * pb;
								printf("\n\tCom sobremesa = R$ %.2f",pf);
							}
		 			  }
		 			  else printf("\n\tErro! Opcao invalida, tente novamente mais tarde.");
}

