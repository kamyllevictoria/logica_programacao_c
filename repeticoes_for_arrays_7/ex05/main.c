#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include <math.h>

main() {
    int i, n;

    do {
        printf("Informe o tamanho do vetor: "); 
        scanf("%d", &n);	
    } while (n <= 0);

    int v[n];

    for (i = 0; i < n; i++) {
        do {
            printf("\nInforme o numero na posicao %d: ", i); 
            scanf("%d", &v[i]);	
        } while (v[i] <= 0);

        int d = 2;
        int primo = 1;

        while (d <= sqrt(v[i])) {
            if (v[i] % d == 0) {
                primo = 0;
                break;
            } else {
                d += 1;
            }			
        }

        if (primo && v[i] >= 2) {
            printf("\nO numero %d e primo. ", v[i]);
        } else {
            printf("\nO numero %d nao e primo. ", v[i]);
        }
    }
}

