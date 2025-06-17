#include <stdio.h>

int main() {
    int escolha;

    while (1) {  // Menu para selecionar a peça para simular movimento
        printf("\n=== MENU DO XADREZ ===\n");
        printf("Escolha sua peça:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("Digite o número da peça: ");
        scanf("%d", &escolha);  // Recebe a escolha do usuário
        
        // Switch para decidir qual peça vai mover
        switch(escolha) {
            case 1:
                // Faz a Torre mover 5 casas para a direita
                printf("\nMovimento da Torre:\n");
                for (int i = 1; i <= 5; i++) {
                    printf("Direita\n");  // Imprime cada passo para a direita
                }
                break;

            case 2:
                // Faz o Bispo mover 5 casas na diagonal para cima e direita
                printf("\nMovimento do Bispo:\n");
                {
                    int i = 1;
                    while (i <= 5) {
                        printf("Cima Direita\n");  // Imprime cada passo diagonal
                        i++;
                    }
                }
                break;

            case 3:
                // Faz a Rainha mover 8 casas para a esquerda
                printf("\nMovimento da Rainha:\n");
                {
                    int i = 1;
                    do {
                        printf("Esquerda\n");  // Imprime cada passo para a esquerda
                        i++;
                    } while (i <= 8);
                }
                break;

            case 4: {
                // Faz o Cavalo mover em "L": duas casas para baixo e uma para esquerda
                printf("\nMovimento do Cavalo:\n");
                
                int casas_para_baixo = 2;     // Quantidade de casas para mover pra baixo
                int casas_para_esquerda = 1;  // Quantidade de casas para mover pra esquerda
                
                // Loop for para o movimento para baixo (duas casas)
                for (int i = 0; i < casas_para_baixo; i++) {
                    int count = 0;
                    // Loop while interno para cumprir o requisito de loop aninhado
                    while (count < 1) {
                        printf("Baixo\n");  // Passo para baixo
                        count++;
                    }
                }
                
                // Loop while para o movimento para esquerda (uma casa)
                int passos = 0;
                while (passos < casas_para_esquerda) {
                    printf("Esquerda\n");  // Passo para esquerda
                    passos++;
                }
                break;
            }

            default:
                // Ocorre quando você digita uma opção que não é existente
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
