#include <stdio.h>
    int main(){
    printf("Batalha Naval Novato!");

    #define TAMANHO_TABULEIRO 10  // Define o tamanho fixo do tabuleiro
    #define TAMANHO_NAVIO 3       // Define o tamanho fixo dos navios

    int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];  // Matriz que representa o tabuleiro
    // 1. Inicializando o tabuleiro com 0 (água)
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;  // 0 representa água
        }
    }    
    // 2. Declarando os navios como vetores (arrays unidimensionais)
    int navioHorizontal[TAMANHO_NAVIO] = {3, 3, 3};  // Navio horizontal
    int navioVertical[TAMANHO_NAVIO] = {3, 3, 3};    // Navio vertical
    return 0;
}
