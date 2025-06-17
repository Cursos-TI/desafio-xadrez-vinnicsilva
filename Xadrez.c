#include <stdio.h>

int main() {
    int escolha;

    while (1) {  // Menu para selecionar a peça para simular movimento
        printf("\n=== MENU DO XADREZ ===\n");
        printf("Escolha sua peça:\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("Digite o número da peça: ");
        scanf("%d", &escolha);
        
        // Parte na qual rola a ação das peças do jogo
        switch(escolha) {
            case 1:
                // Faz a Torre mover 5 casas para a direita
                printf("\nMovimento da Torre:\n");
                for (int i = 1; i <= 5; i++) {
                    printf("Direita\n");
                }
                break;

            case 2:
                // Faz o Bispo mover 5 casas para a diagonal cima
                printf("\nMovimento do Bispo:\n");
                {
                    int i = 1;
                    while (i <= 5) {
                        printf("Cima Direita\n");
                        i++;
                    }
                }
                break;

            case 3:
                // Faz a Rainha mover 5 casas para a esquerda    
                printf("\nMovimento da Rainha:\n");
                {
                    int i = 1;
                    do {
                        printf("Esquerda\n");
                        i++;
                    } while (i <= 8);
                }
                break;

            default:
                // Ocorre quando você digita uma opção que não é existente
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
