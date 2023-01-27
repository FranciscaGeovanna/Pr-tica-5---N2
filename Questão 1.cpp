#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	
	int num[10];
	int maior = num[0], menor = 100000, pma = 0, pme = 0;
	
	printf("Programa para mostrar o menor e maior valor e seus índices: ");
	
	for(int i=0; i < 10; i++){
		printf("\nDigite o %dª valor: ", i+1);
		scanf("%d", &num[i]);
		if(maior < num[i]){
			maior = num[i];
			pma = i;
		}
		
		if(menor > num[i]){
			menor = num[i];
			pme = i;
		}
	}
	
    	printf("\nO maior valor é: %d e está na %d posição\n", maior, pma + 1);
    	printf("O menor valor é: %d e está na %d posição\n", menor, pme + 1);

	return 0;
}