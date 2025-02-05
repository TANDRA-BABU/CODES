#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    double num, result = 0;
    char operator;
    printf("Enter the number of values you want to calculate: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Invalid input. Number of values must be greater than 0.\n");
        return 1;
    }
    printf("Enter the initial value or the first number: ");
    scanf("%lf", &result);  // Initialize result with the first number

    for (int i = 1; i < n; i++) { // Loop for the remaining n-1 numbers
        printf("Enter the operator (+, -, *, /,^) and the next number: ");
        scanf(" %c %lf", &operator, &num); // Note the space before %c to consume any leftover newline

        switch (operator) 
        {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                if (num == 0) {
                    printf("Division by zero error!\n");
                    return 1; // Indicate an error
                }
                result /= num;
                break;
            case '^':  // Power
            result = pow(result,num);
            break;
            default:
                printf("Invalid operator.\n");
                return 1; // Indicate an error
        }
    }
    printf("The result is: %lf\n", result);
    return 0; // Indicate successful execution
}