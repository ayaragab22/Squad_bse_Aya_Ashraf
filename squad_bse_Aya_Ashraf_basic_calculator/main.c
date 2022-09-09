#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num_1;
    double num_2;
    printf("Enter your first number!\n");
    scanf("%lf",&num_1);
    printf("Enter your second number!\n");
    scanf("%lf",&num_2);
    printf("Sum: %.2f\n", num_1 + num_2);
    printf("Subtract: %.2f\n", num_1 - num_2);
    printf("Multiply: %.2f\n", num_1 * num_2);
    printf("Division: %.2f\n", num_1 / num_2);

    return 0;
}
