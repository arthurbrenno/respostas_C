// !!!Questao 1!!!
#include <stdio.h>

/**
 * Aqui estou definindo as informacoes
 * relevantes para essa questao
 */
struct habitante {
    int idade;
    char cor_dos_olhos;
    char sexo;
    char cor_dos_cabelos;
};

/**
 * Essa funcao vai ler o vetor de habitantes
 */
void ler_vetor(struct habitante* vetor_habitantes) {
    for (int i = 0; i < 5; i++) {
        printf("Sexo: ");
        scanf("%c", &vetor_habitantes[i].sexo);

        printf("Cor dos olhos: ");
        scanf("%c", &vetor_habitantes[i].cor_dos_olhos);

        printf("Cor dos cabelos: ");
        scanf("%c", &vetor_habitantes[i].cor_dos_cabelos);

        printf("Idade: ");
        scanf("%d", &vetor_habitantes[i].idade);
    }
}

void media_idade_com_olhos_castanhos_e_pretos(struct habitante habitantes[5]) {
    
    //duas variaveis pra controlar dentro do laço de repeticao abaixo
    int soma_das_idades       = 0;
    int quantidade_de_pessoas = 0;

    for (int i = 0; i < 5; i++) {
        
        //criei a variavel abaixo so pra vc entender. eu poderia falar "habitantes[i]" dentro do if direto.
        struct habitante habitante_atual = habitantes[i];

        if (habitante_atual.cor_dos_olhos == 'C' && habitante_atual.cor_dos_cabelos == 'P') {
            quantidade_de_pessoas =quantidade_de_pessoas + 1;
            soma_das_idades += habitante_atual.idade;
        }
    }
    
    //sempre que for dividir dois "int"s. converta um pelo menos para float e troque %d por %f
    printf("A media eh: %f", soma_das_idades / (float)quantidade_de_pessoas);
}

int obter_maior_idade(struct habitante habitantes[5]) {
    //qualquer idade digitada inicialmente vai ser maior que -1, entao posso comparar depois.
    int maior_idade_do_grupo = -1;

    for (int i = 0; i < 5; i++) {
        
        struct habitante habitante_atual = habitantes[i];
        if (habitante_atual.idade > maior_idade_do_grupo) {
            maior_idade_do_grupo = habitante_atual.idade;
        }
        
    }
    
    //"retorne" a maior idade do grupo (int)
    return maior_idade_do_grupo; 
}

int obter_qtd_de_indiv_entre_18_e_35(struct habitante habitantes[5]) {

    //pra controlar a quantidade de individuos:
    int contador = 0;
    
    
    for (int i = 0; i < 5; i++) {
        struct habitante habitante_atual = habitantes[i];

        if (habitante_atual.idade >= 18 && habitante_atual.idade <= 35 && habitante_atual.cor_dos_olhos == 'A' && habitante_atual.cor_dos_cabelos == 'L') {
            contador = contador + 1;
        }

    }
    
    //"retorne" o contador (individuos entre 18 e 35 com cabelos louros e olhos azuis). (int)
    return contador;
}

int main() {
    struct habitante habitantes[5];

    ler_vetor(habitantes);

    media_idade_com_olhos_castanhos_e_pretos(habitantes);

    printf("A maior idade eh: %d", obter_maior_idade(habitantes));

    printf("Individuos entre 18 e 35 com cabelos louros e olhos azuis = %d", obter_qtd_de_indiv_entre_18_e_35(habitantes));
}
