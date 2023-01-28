#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    int vet[10], num, i;
    
    printf("Programa para mostrar se o número está no vetor\n");

    for (i = 0; i < 10; i++){
        vet[i] = rand() % 10 + 1;
    }

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++){
        if (vet[i] == num) {
            printf("O número %d está no vetor e na posição %d\n", num, i);
           
            return 0;
        }
    }
    
    printf("O número %d não está no vetor\n", num);
    
    return 0;
}