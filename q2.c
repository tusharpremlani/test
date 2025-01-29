#include <stdio.h>
float averageTemperature(float temp[], int numDays) {
    float sum = 0;
    for (int i = 0; i < numDays; i++) {
        sum += temp[i];
    }
    return sum / numDays;
}
void findExtremes(float temp[], int numDays) {
    float highest = temp[0], lowest = temp[0];
    int highestDay = 1, lowestDay = 1;
    for (int i = 1; i < numDays; i++) {
        if (temp[i] > highest) {
            highest = temp[i];
            highestDay = i + 1;
        }
        if (temp[i] < lowest) {
            lowest = temp[i];
            lowestDay = i + 1;
        }
    }
    printf("Highest temperature: %.2f°C on Day %d\n", highest, highestDay);
    printf("Lowest temperature: %.2f°C on Day %d\n", lowest, lowestDay);
}
int main() {
    int numDays = 7;
    float temperatures[numDays];
    printf("Enter temperatures for 7 days:\n");
    for (int i = 0; i < numDays; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
    }
    printf("Average temperature: %.2f°C\n", averageTemperature(temperatures, numDays));
    findExtremes(temperatures, numDays);

    return 0;
}
