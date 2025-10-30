#include <stdio.h>

int main() {
    int n;

    printf("Enter size of board (N x N): ");
    scanf("%d", &n);

    int board[n][n];
    int rotated[n][n];

    printf("Enter board values:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    printf("\nOriginal Board:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }

    int temp[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp[j][i] = board[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            rotated[i][j] = temp[i][n - 1 - j];
        }
    }

    printf("\nRotated Board (90 degrees clockwise):\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", rotated[i][j]);
        }
        printf("\n");
    }

    return 0;
}
