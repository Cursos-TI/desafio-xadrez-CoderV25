#include <stdio.h>

// Funções Recursivas

// --- Movimento da Torre (Recursão)

void movimentoTorre(int casasRestantes){
    if (casasRestantes > 0){

        printf("Direita\n");
        movimentoTorre(casasRestantes - 1);
    }
}

// --- Movimento do Bispo (Recursão)

void movimentoBispo(int casasRestantes){
    if (casasRestantes <= 0){

        for(int i = 0; i < 1; i++){

            for(int j = 0; j < 1; j++){
                printf("Baixo, Esquerda\n");
            }
        }

        printf("Cima, Direita\n");
        movimentoBispo(casasRestantes - 1);
    }
}

// --- Movimento da Rainha (Recursão)

void movimentoRainha(int casasRestantes){
    if (casasRestantes > 0){

        printf("Esquerda\n");
        movimentoRainha(casasRestantes - 1);
    }
}

int main() {

    // --- Movimento da Torre (Recursão)

    // Define o número de casas que a Torre se moverá.
    int casasParaMoverTorre = 5;

    printf("--- Movimento da Torre ---\n");
    const int casasRestantes = casasParaMoverTorre;

    movimentoTorre(casasRestantes);

    // --- Movimento do Bispo (Recursão)

    // Define o número de casas que o Bispo se moverá.
    int casasParaMoverBispo = 5;
    

    printf("\n--- Movimento do Bispo ---\n");

    const int casasRestantesBispo = casasParaMoverBispo;

    movimentoBispo(casasRestantesBispo);


    // --- Movimento da Rainha (Recursão)

    // Define o número de casas que a Rainha se moverá.
    int casasParaMoverRainha = 8;

    printf("\n--- Movimento da Rainha ---\n");

    const int casasRestantesRainha = casasParaMoverRainha;

    movimentoRainha(casasRestantesRainha);

    // --Movimento do Cavalo (Loops aninhados)

    const int casasParaCima = 2;
    const int casasParaDireita = 1;
    const int movimentoTotal = casasParaCima + casasParaDireita;

    printf("\n--- Movimento do Cavalo ---\n");

    for (int movimentoAtual = 1; movimentoAtual <= movimentoTotal; movimentoAtual++){

        // Este loop sempre executa uma vez e é interrompido pelo Break.
         
        while(1){

            if (movimentoAtual <= casasParaCima){
                //Movimento para cima.
                printf("Cima\n");

            } else {
                    //Movimento para a direita.
                    printf("Direita\n"); 

                }

            // Interrompe o loop infinito.
            break;
         }  
    }

    return 0;
}