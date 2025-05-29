#include <stdio.h>

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

    // 3. Coordenadas iniciais para cada navio (definidas diretamente no código)
    int linhaHorizontal = 2;  // Linha de início para navio horizontal
    int colunaHorizontal = 4; // Coluna de início para navio horizontal

    int linhaVertical = 5;    // Linha de início para navio vertical
    int colunaVertical = 7;   // Coluna de início para navio vertical


    // 4. Posicionando o navio horizontal no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        // Validação: garante que não vai ultrapassar o limite do tabuleiro
        if (colunaHorizontal + i < TAMANHO_TABULEIRO) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
        }
    }    

    // 5. Posicionando o navio vertical no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        // Validação: garante que não vai ultrapassar o limite do tabuleiro
        if (linhaVertical + i < TAMANHO_TABULEIRO) {
            tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
        }
    }

    // 6. Exibindo o tabuleiro no console
    printf("Tabuleiro Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);  // Mostra 0 para água e 3 para parte de navio
        }
        printf("\n");  // Pula para a próxima linha após cada linha do tabuleiro
    }

    return 0;
}
