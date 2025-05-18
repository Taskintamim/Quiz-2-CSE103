#include <stdio.h>

int main() {
    int items[15][2];
    int totalQuantity = 0;
    int totalValue = 0;
    int minValue = 0;
    int minIndex = 0;

    printf("Enter quantity and price for 15 items:\n");
    for (int i = 0; i < 15; i++) {
        printf("Item %d - Quantity: ", i + 1);
        scanf("%d", &items[i][0]);

        printf("Item %d - Price: ", i + 1);
        scanf("%d", &items[i][1]);

        int value = items[i][0] * items[i][1];
        totalQuantity += items[i][0];
        totalValue += value;

        if (i == 0 || value < minValue) {
            minValue = value;
            minIndex = i;
        }
    }

    printf("\nTotal Quantity in Shop: %d\n", totalQuantity);
    printf("Total Stock Value: %d\n", totalValue);
    printf("Item with Lowest Stock Value: Item %d\n", minIndex + 1);

    return 0;
}

