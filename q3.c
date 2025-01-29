#include <stdio.h>
#include <string.h>
int main() {
    char name[100], dob[11], password[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your date of birth (DD-MM-YYYY): ");
    scanf("%s", dob);
    char firstThree[4];  
    strncpy(firstThree, name, 3);
    firstThree[3] = '\0';
    char dayMonth[6];  
    strncpy(dayMonth, dob, 5);
    dayMonth[5] = '\0';
    snprintf(password, sizeof(password), "%s%s", firstThree, dayMonth);
    printf("Generated password: %s\n", password);
    return 0;
}
