#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	float n1, n2, m;
	printf("Informe sua primeria nota: ");
	scanf("%f" ,&n1);
	printf("Informe sua segunda nota: ");
	scanf("%f" ,&n2);
	m = n1* 0.4 + n2*0.6;
	printf("Sua media final é de: %.2f" ,m);
}
