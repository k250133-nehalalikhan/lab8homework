#include <stdio.h>
int main() {
    int inventory[2][3][4];

    printf("Enter quantities for warehouse inventory:\n");
    for(int section = 0; section < 2; section++) {
        printf("\nSection %d:\n", section + 1);
        for(int shelf = 0; shelf < 3; shelf++) {
            printf("  Shelf %d:\n", shelf + 1);
            for(int item = 0; item < 4; item++) {
                printf("    Item %d: ", item + 1);
                scanf("%d", &inventory[section][shelf][item]);
            }
        }
    }

    printf("\n--- Total Items per Section ---\n");
    for(int section = 0; section < 2; section++) {
        int sectionTotal = 0;
        for(int shelf = 0; shelf < 3; shelf++) {
            for(int item = 0; item < 4; item++) {
                sectionTotal += inventory[section][shelf][item];
            }
        }
        printf("Section %d: %d items\n", section + 1, sectionTotal);
    }

    int maxShelfTotal = 0;
    int maxSection = 0;
    int maxShelf = 0;

    for(int section = 0; section < 2; section++) {
        for(int shelf = 0; shelf < 3; shelf++) {
            int shelfTotal = 0;
            for(int item = 0; item < 4; item++) {
                shelfTotal += inventory[section][shelf][item];
            }
            if(shelfTotal > maxShelfTotal) {
                maxShelfTotal = shelfTotal;
                maxSection = section + 1;
                maxShelf = shelf + 1;
            }
        }
    }

    printf("\n--- Shelf with Highest Quantity ---\n");
    printf("Section %d, Shelf %d: %d items\n", maxSection, maxShelf, maxShelfTotal);

    return 0;
}