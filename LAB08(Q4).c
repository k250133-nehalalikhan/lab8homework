#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int seats[rows][cols];
    srand(time(0));
    printf("\nSeating Arrangement (0 = Empty, 1 = Occupied):\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            seats[i][j] = rand() % 2;
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }
    int totalEmpty = 0;
    int maxEmpty = 0;
    int maxEmptyRow = 0;

    for(int i = 0; i < rows; i++) {
        int emptyInRow = 0;
        for(int j = 0; j < cols; j++) {
            if(seats[i][j] == 0) {
                totalEmpty++;
                emptyInRow++;
            }
        }
        if(emptyInRow > maxEmpty) {
            maxEmpty = emptyInRow;
            maxEmptyRow = i + 1;
        }
    }

    printf("\nTotal Available Seats: %d\n", totalEmpty);
    printf("Row with Most Empty Seats: Row %d (%d empty seats)\n", maxEmptyRow, maxEmpty);

    return 0;
}
