#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float altura, peso, imc;

	printf("Para conferir seu indice de massa corporal, informe seus dados basicos:");
	printf("\nAltura: ");
	scanf("%f" ,&altura);
	printf("\nPeso: ");
	scanf("%f" ,&peso);
	imc = (peso/(altura*altura));
	
	if (imc < 20)
		{
			printf("%c, voce possui imc de %.2f, classificado como subnormal, procure um medico",imc);
		}
		else if (imc <= 25)
			{
				printf("Voce possui imc de %.2f, classificado como normal.",imc);
			}
			else if (imc <= 30)
				{
					printf("Voce possui imc de %.2f, classificado como sobrepeso, procure um medico e reveja seus habitos alimentares e fisicos.",imc);	
				}
				else if (imc <= 35)
					{
						printf("Voce possui imc de %.2f, classificado como obesidade leve, procure um medico e reveja seus habitos alimentares e fisicos.",imc);
					}
					else if (imc <= 40)
						{
							printf("Voce possui imc de %.2f, classificado como obesidade moderada, procure um medico e reveja seus habitos alimentares e fisicos.",imc);
						}
						else if (imc >= 40)
							{
								printf("Voce possui imc de %.2f, classificado como obesidade morbida, procure um medico e reveja seus habitos alimentares e fisicos.",imc);
							}

}
