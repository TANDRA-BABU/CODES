#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int *marks = (int*)malloc(n * sizeof(int)); // Dynamically allocate memory for the array of marks
    printf("Enter the marks of %d students: \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += marks[i]; // Calculate the sum of marks
    }
    float average = (float)sum / n; // Calculate the average marks
    printf("Average marks: %.2f\n", average);
    free(marks); // Free the dynamically allocated memory
    return 0;
}