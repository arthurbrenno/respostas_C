//!!!QUESTAO 4!!!

#include <stdio.h>

int main() {
    //jeito mais facil:
    int matriz[5][5] = {
            {1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 1}
    };


    /** JEITO COMPLICADO QUE ELA PODE PEDIR:
     *SE QUISER USAR TEM QUE APAGAR ESSE COMENTARIO

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            if (linha == coluna) {
                matriz[linha][coluna] = 1;
            }
            else {
                matriz[linha][coluna] = 0;
            }
        }
    }*/


    /*
     * Apenas mostrando a matriz:
     */
    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            printf("%d", matriz[linha][coluna]);
        }
    }
}