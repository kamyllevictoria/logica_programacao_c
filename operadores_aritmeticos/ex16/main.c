#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	int n1, n2, d;
	printf("Informe um numero para conferir sua unidade resto: ");
	scanf("%d" ,&n1);
	scanf("%d" ,&n2);
	d = n1 % n2;
	printf("O resultado final das unidades restantes e dado por: %d" ,d); 
}
