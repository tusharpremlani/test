#include <stdio.h>

int main() {
    float d[7];
    float total = 0.0;
    float min = 10000.0;
    int dayMin = 0;

    printf("Enter distances for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &d[i]);
    }

    for (int i = 0; i < 7; i++) {
        total += d[i];

        if (d[i] < min) {
            min = d[i];
            dayMin = i + 1;
        }
    }

    printf("\nTotal distance: %.2f km\n", total);
    printf("Day with the shortest distance: Day %d (%.2f km)\n", dayMin, min);

    return 0;
}
