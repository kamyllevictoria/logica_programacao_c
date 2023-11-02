#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>

int main() {
    //setlocale(LC_ALL, "Portuguese"); //a biblioteca locale pode interferir na pontuação, convertendo . para ,, gerando erros nas operações
    int n, i;
    float m = 0;

    do {
        printf("Informe o tamanho do vetor para armazenar as notas: ");
        scanf("%d", &n);
    } while (n <= 0);

    float v[n];

    for (i = 0; i < n; i= i+1) {
        printf("Agora informe o valor da posicao %d: ", i);
        scanf("%f", &v[i]); 
        m = m + v[i];
    }
    
    printf("A media dos valores e dada por: %.2f. ", m/n);
    return 0;
}

