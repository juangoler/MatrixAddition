#include <stdio.h>

int main() {
    int matriz1[3][3], matriz2[3][3], soma[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para matriz1[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para matriz2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nSoma das matrizes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
