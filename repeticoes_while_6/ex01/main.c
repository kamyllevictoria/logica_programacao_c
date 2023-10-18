#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); 
    int a, b, x;
    printf("Informe o valor de a: "); 
    scanf("%d", &a);
    printf("Informe o valor de b: "); 
    scanf("%d", &b);
    printf("Informe o valor de x: "); 
    scanf("%d", &x);

    while (a >= b) {
        printf("O valor de a deve ser menor do que b para realizar a operação!\n");
        printf("Informe o valor de a: "); 
        scanf("%d", &a);
        printf("Informe o valor de b: "); 
        scanf("%d", &b);
    }
    
    int cont = 0;
    
    int inicio = a; // Salva o valor inicial de a
    while (a <= b) {
        if (a % x == 0) {
            cont++;
        }
        a++;
    }
    
    printf("Foram encontrados %d números divisíveis por %d entre o intervalo de %d e %d.", cont, x, inicio, b);

    return 0;
}



