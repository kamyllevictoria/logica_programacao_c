#include <stdio.h>
#include <stdlib.h>
float N1, N2;
int main() {
    printf("Informm your first class note: ");
    scanf("%f", &N1); //o programa scanf armazena e mostra o valor informado pelo usuário
    printf("Informm your second class note: ");
    scanf("%f", &N2);
    printf("Your media is: %.2f" , ((N1+N2)/2));//nao precisamos criar uma variavel media, pois podemos criar nosso calculo diretamente na saída de dados. //usamos o .2 no %f para indicar o numero de casas decimais que terá a nossa media final.
	getch(); //serve para sairmos do programa e finaliza-lo.
}

