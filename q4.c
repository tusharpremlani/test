#include <stdio.h>
int main() {
    float weeklySales[7];
    float totalWeeklySales = 0.0;
    float maxSales = 0.0;
    int maxSalesDay = 0;
    printf("Enter sales for 7 days:\n");
    for (int i = 0; i < 7; i++) {
        printf("Sales for Day %d: ", i + 1);
        scanf("%f", &weeklySales[i]);
    }
    for (int i = 0; i < 7; i++) {
        totalWeeklySales += weeklySales[i];
        if (weeklySales[i] > maxSales) {
            maxSales = weeklySales[i];
            maxSalesDay = i + 1;
        }
    }
    printf("\nTotal sales for the week: %.2f\n", totalWeeklySales);
    printf("Day with the highest sales: Day %d (%.2f)\n", maxSalesDay, maxSales);
    return 0;
}
