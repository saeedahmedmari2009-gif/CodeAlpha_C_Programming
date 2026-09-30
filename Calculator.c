#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("--- CodeAlpha Basic Calculator ---\n");
    printf("Student ID: CA/DF1/310688\n\n");

    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Select Operation (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("\nError! Division by zero not allowed.\n");
            }
            break;
        default:
            printf("\nInvalid Choice! Please select 1-4.\n");
    }

    return 0;
}
