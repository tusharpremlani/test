#include <stdio.h>
int main() {
    float rainfall[7];
    float totalRainfall = 0.0;
    int noRainDay = -1;
    printf("Enter rainfall amounts (in mm) for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &rainfall[i]);
    }
    for (int i = 0; i < 7; i++) {
        totalRainfall += rainfall[i];
        if (rainfall[i] == 0 && noRainDay == -1) {
            noRainDay = i + 1;
        }
    }
    printf("\nTotal rainfall for the week: %.2f mm\n", totalRainfall);
    if (noRainDay != -1) {
        printf("Day %d had no rainfall.\n", noRainDay);
    } else {
        printf("There was no day with no rainfall.\n");
    }
    return 0;
}
