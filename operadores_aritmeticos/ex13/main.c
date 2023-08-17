#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float p1, p2, a1, a2, t1, t2;
	printf("Inform the amount of first part: ");
	scanf("%f" ,&p1);
	printf("Now, the amount of second part: ");
	scanf("%f" ,&p2);
	a1 = p1 + (p1*0.17);
	a2 = p2 + (p2 * 0.26);
	t1 = p1 + a1;
	t2 = p2 + a2;
	printf("The first part with an acrease of 17/100, its given by: %.2f.\nThe second part with an acrease of 26/200, its given by: %.2f.\nSo, the total of parts, 1 and 2, respectively, added before and after addition is: %.1f and %.1f." ,a1, a2, t1,t2); 
}
