#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float n1,n2,m;
	printf("Informe sua primeira nota: "); scanf("%f" ,&n1);
	printf("Informe sua segunda nota: "); scanf("%f" ,&n2);
	m = (n1 + n2)/2;
	int aulas, aulas_participadas;
	float frequencia_total;
	char materia;
	printf("Certo, agora informe quantas aulas voce obteve no semestre:"); scanf("%d" ,&aulas);
	printf("Quantas aulas voce participou? "); scanf("%d" ,&aulas_participadas);
	printf("Informe o nome da disciplina: "); fflush(stdin); scanf("%c" ,&materia);
	frequencia_total = (aulas_participadas * 100)/aulas;
	printf("\nAulas dadas: %d \nAulas comparecidas: %d. \nFrequencia total: %.0f%%. \nMedia: %.2f" ,aulas, aulas_participadas, frequencia_total, m);
	if ( m < 6 && frequencia_total < 75)
	{
		printf("\nREPROVADO");
	}
		else if( m > 6 && frequencia_total < 75)
			{
				printf("\nREPROVADO.");
			}
			else if (m < 6 && frequencia_total > 75)
			{
				printf("\nREPROVADO.");
			}
				else{
					printf("\n\tAPROVADO");
				}

}
