#include <stdio.h>

int main(void) {
    float num1, num2, results;
    char operator;
    char username[20];

    // Ask for the user's name
    printf("Hello, please enter your username: ");
    scanf("%s", username);

    printf("Welcome to Ekuke Calculator, %s! 🤖\n", username);

    // Get the first number
    printf("\nEnter the first number: ");
    scanf("%f", &num1);

    // Get the second number
    printf("Please enter the second number: ");
    scanf("%f", &num2);

    // Ask for the operator
    printf("\nPlease select an operator:\n");
    printf("➕  for 'Addition'\n");
    printf("➖  for 'Subtraction'\n");
    printf("❌  for 'Multiplication'\n");
    printf("➗  for 'Division'\n");
    printf("Enter your operator: ");
    scanf(" %c", &operator);  // note the space before %c

    // Perform calculation
    if (operator == '+') {
        results = num1 + num2;
        printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, results);
    } else if (operator == '-') {
        results = num1 - num2;
        printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, results);
    } else if (operator == '*') {
        results = num1 * num2;
        printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, results);
    } else if (operator == '/') {
        if (num2 != 0) {
            results = num1 / num2;
            printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, results);
        } else {
            printf("\nError: Division by zero is not allowed.\n");
        }
    } else {
        printf("\nError: Invalid operator '%c'\n", operator);
    }

    return 0;
}

