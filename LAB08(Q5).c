#include <stdio.h>
 int main() {
    int marks[5][4];
    float averages[5];
    int highest[4];

    printf("Enter marks of 5 students in 4 subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        for(int j = 0; j < 4; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\nAverage marks of each student: [");
    for(int i = 0; i < 5; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            sum += marks[i][j];
        }
        averages[i] = sum / 4.0;
        printf("%.2f", averages[i]);
        if(i < 4) printf(", ");
    }
    printf("]\n");

    printf("Highest marks in each subject: [");
    for(int j = 0; j < 4; j++) {
        highest[j] = marks[0][j];
        for(int i = 1; i < 5; i++) {
            if(marks[i][j] > highest[j]) {
                highest[j] = marks[i][j];
            }
        }
        printf("%d", highest[j]);
        if(j < 3) printf(", ");
    }
    printf("]\n");

    return 0;
}
