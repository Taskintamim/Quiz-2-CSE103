#include <stdio.h>

int main() {
    float attendance[50];
    float bonus[50];
    float totalBonus = 0;

    printf("Enter attendance percentages for 50 students:\n");
    for (int i = 0; i < 50; i++) {
        printf("Student %d: ", i + 1);
        scanf("%f", &attendance[i]);

        if (attendance[i] > 95) {
            bonus[i] = 2.0;
        } else if (attendance[i] > 85) {
            bonus[i] = 1.5;
        } else if (attendance[i] >= 75) {
            bonus[i] = 1.0;
        } else {
            bonus[i] = 0.0;
        }

        totalBonus += bonus[i];
    }

    float averageBonus = totalBonus / 50.0;

    printf("\nAverage Bonus Marks: %.2f\n", averageBonus);

    return 0;
}

