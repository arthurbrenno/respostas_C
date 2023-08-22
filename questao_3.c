//!!!QUESTAO 3!!!

#include <stdio.h>

int main() {

    //declarando o vetor
    int vetor[10];

    //preenchendo o vetor e já verificando se ele é negativo direto depois
    for (int i = 0; i < 10; i++) {
        printf("Posicao numero %d:", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    //apenas mostrando o vetor
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}
