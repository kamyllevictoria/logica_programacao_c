#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float n1,n2,m;
	printf("Informe sua primeira nota:");
	scanf("%f" ,&n1);
	printf("\nCerto, agora informe sua segunda nota e confira sua media:");
	scanf("%f" ,&n2);
	m = (n1 + n2)/2;
	if (m >=6){
		printf("APROVADO!");
	}
		else if(m >=3)
			{
				printf("REPROVADO!");
			}
			else{
					printf("REPROVADO!");
				}
}
