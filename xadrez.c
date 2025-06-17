#include <stdio.h>

// Função recursiva para movimentar a Torre (para direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para movimentar a Rainha (para esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva para o movimento vertical do Bispo
void moverBispo(int verticais, int horizontais) {
    if (verticais > 0) {
        // Loop interno para o movimento horizontal em cada linha
        for (int i = 0; i < horizontais; i++) {
            printf("Direita ");
        }
        printf("Cima\n");
        moverBispo(verticais - 1, horizontais);
    }
}

// Movimento do cavalo usando loops aninhados + break/continue
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }

    for (int j = 0; j < 2; j++) {
        if (j == 1) {
            break; // Sai depois de uma casa pra Direita
        }
        printf("Direita\n");
    }
}

int main() {
    int escolha;

    while (1) {  // Menu principal do xadrez
        printf("\n=== MENU DO XADREZ ===\n");
        printf("Escolha sua peça:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("Digite o número da peça: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("\nMovimento da Torre:\n");
                moverTorre(5);  // Move 5 casas para direita
                break;

            case 2:
                printf("\nMovimento do Bispo:\n");
                moverBispo(3, 1);  // Move 3 casas na diagonal (1 horizontal por vertical)
                break;

            case 3:
                printf("\nMovimento da Rainha:\n");
                moverRainha(8);  // Move 8 casas para esquerda
                break;

            case 4:
                printf("\nMovimento do Cavalo:\n");
                moverCavalo(); // Move 2 casas pra baixo e 1 para direita
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
