
#include <stdio.h>

int main() {
    // Torre: 5 casas para direita
    printf("Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    // Bispo: 5 casas na diagonal
    printf("\nBispo:\n");
    int b = 0;
    while (b < 5) {
        printf("Cima, Direita\n");
        b++;
    }
    // Rainha: 8 casas para esquerda
    printf("\nRainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    return 0;
}
