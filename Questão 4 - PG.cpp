#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	
	int pg[10];
	int razao;
	
	printf ("Programa para calcular termos de uma P.G: \n");
	
	printf("Digite o valor inicial: ");
	scanf("%d", &pg[0]);
	
	printf("Digite a razão: ");
	scanf("%d", &razao);
	
	for(int i = 1; i < 10; i++){
		pg[i] = pg[i - 1] * razao;
	}
	
	printf("\nP.G: ");
	
	for(int i = 0; i < 10; i++){
		printf("%d ", pg[i]);
	}
	
	return 0;
}