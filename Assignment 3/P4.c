#include <stdio.h>

int main() {
    int a, b, choice, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nMenu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result: %d + %d = %d\n", a, b, result);
            break;

        case 2:
            result = a - b;
            printf("Result: %d - %d = %d\n", a, b, result);
            break;

        case 3:
            result = a * b;
            printf("Result: %d * %d = %d\n", a, b, result);
            break;

        case 4:
            if (b != 0) {
                result = a / b;
                printf("Result: %d / %d = %d\n", a, b, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}