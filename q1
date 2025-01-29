#include <stdio.h>
#include <string.h>
#define CHANCE 2
#define VALID_NAME "TUSHAR"  
int main() {
    char enteredName[50];  
    int attemptCount = 0; 
    printf("Hello Please enter your name: \n");
    while (attemptCount < CHANCE) {
        printf("Try %d/%d: Enter your name: ", attemptCount + 1, CHANCE);
        scanf("%49s", enteredName);   
        if (strcmp(enteredName, VALID_NAME) == 0) {
            printf("Login successful! Welcome, %s.\n", enteredName);
            return 0;  
        } else {
            printf("Incorrect name. Please try again.\n");
            attemptCount++;
        }
    }
    printf("Too many failed attempts. Access denied.\n");
    return 1; 
}
