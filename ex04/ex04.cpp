#include<stdio.h>
int main (){

	int Ano;
	int Meses;
	int Dias;
	int TotalA;
	int TotalM;
	int TotalD;
	printf("Informe sua idade: ");
	printf("Anos: ");
	scanf("%d" ,&Ano);
	printf("Meses: ");
	scanf("%d" ,&Meses);
	printf("Dias: ");
	scanf("%d" ,&Dias);
	TotalA = Ano * 365;
	TotalM = Meses * 30;
	TotalD = TotalA + TotalM + Dias;
	printf("Sua idade em dias e dada por: %d" ,TotalD);
}
