//!!!QUESTAO 2!!!
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    int* vetor = (int*) malloc(n * sizeof(int));

    int quantidade_de_pares   = 0;
    int quantidade_de_impares = 0;

    //preenchendo o vetor e verificando os numeros:
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);

        // % 2 == 0 significa que o resto da div por 2 deu 0, ou seja: par
        if (vetor[i] % 2 == 0) {
            quantidade_de_pares++;
        }
        else {
            quantidade_de_impares++;
        }
    }

    printf("Qtd pares: %d\nQtd impares: %d", quantidade_de_pares, quantidade_de_impares);
}