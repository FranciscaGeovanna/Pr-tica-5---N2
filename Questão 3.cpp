#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	
	int pa[10];
	int razao;
	
	printf("Programa para calcular termos de uma P.A: \n");
	
	printf("Digite o valor inicial: ");
	scanf("%d", &pa[0]);

	printf("\nDigite a razão: ");
	scanf("%d", &razao);
	
	for(int i = 1; i < 10; i++){
		pa[i] = pa[i-1] + razao;
	}
	
	printf("\nP.A: ");
	
	for(int i=0; i < 10; i++){
		printf("%d ", pa[i]);
	}
	
	return 0;
}