#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int num;
	printf("Informe um valor de 0-10 e veja o nome de sua figura geometrica: ");
	scanf("%d" ,&num);
	if (num <= 2){
		printf("A figura nao compoe um poliedro");
	}
	else if ( num == 3)
	{
		printf("Quantidade de lados informados: %d" ,num);
		printf("\nTriangulo.");
	}
		else if (num == 4)
			{
				printf("Quantidade de lados informados: %d" ,num);
				printf("\nQuadrilatero.");
			}
			else if ( num == 5)
				{
					printf("Quantidade de lados informados: %d" ,num);
					printf("\nPentagono.");
				}
				else if ( num == 6)
					{
						printf("Quantidade de lados informados: %d" ,num);
						printf("\nHexagono.");
					}
					else if ( num == 7)
						{
							printf("Quantidade de lados informados: %d" ,num);
							printf("\nHeptagono.");
						}
						else if ( num == 8)
							{
								printf("Quantidade de lados informados: %d" ,num);
								printf("\nOctagono.");	
							}
							else if ( num == 9)
								{
									printf("Quantidade de lados informados: %d" ,num);
									printf("\nEneagono.");
								}
								else if ( num == 10)
									{
										printf("Quantidade de lados informados: %d" ,num);
										printf("\nDecagono.");
									}
									else printf("Voce ultrapassouu os limites informados, tente novamente mais tarde.");
									
}
