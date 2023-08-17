#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float largura , comprimento, area, total, largurat, comprimentot, areat;
	printf("To know the size of the wall and the necessary number of bricks for its construction, inform its: \n Width and length: ");
	scanf("%f" ,&largura);
	scanf("%f" ,&comprimento);
	area = largura * comprimento;
	printf("\nTotal area: %.2f m²" ,area);
	printf("\nNow, its time to know the size of brick. Inform the width and the length, please: ");
	scanf("%f" ,&largurat);
	scanf("%f" ,&comprimentot);
	areat = largurat * comprimentot;
	total = area/ areat;
	printf("\nThe total of bricks to ramp up a wall its: %.1f." ,total);
}
