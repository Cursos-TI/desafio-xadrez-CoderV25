#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // --- Movimento da Torre (FOR)

    // Define o número de casas que a Torre se moverá.
    int casasParaMoverTorre = 5;

    printf("--- Movimento da Torre ---\n");
    
    // O  'for' executará 5 vezes.
    for (int i = 0; i < casasParaMoverTorre; i++) {

        // Imprime a direção do movimento a cada passo.
        printf("Direita\n");
    }


    // --- Movimento do Bispo (WHILE)

    // Define o número de casas que o Bispo se moverá.
    int casasParaMoverBispo = 5;
    int contadorBispo = 0; // Variável de controle para o laço 'while'.

    printf("\n--- Movimento do Bispo ---\n");

    while (contadorBispo < casasParaMoverBispo) {

        // Imprime a combinação de direções do movimento diagonal.
        printf("Cima, Direita\n");
        
        // Incrementa o contador para evitar um laço infinito e controlar a repetição.
        contadorBispo++;
    }


    // --- Movimento da Rainha (DO-WHILE)

    // Define o número de casas que a Rainha se moverá.
    int casasParaMoverRainha = 8;
    int contadorRainha = 0; // Variável de controle para o laço 'do-while'.

    printf("\n--- Movimento da Rainha ---\n");

    do {
        // Imprime a direção do movimento a cada passo.
        printf("Esquerda\n");
        
        // Incrementa o contador para controlar o número de repetições.
        contadorRainha++;
    } while (contadorRainha < casasParaMoverRainha);

    return 0;
}
