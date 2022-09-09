#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    char operation;
    printf("Enter first number!\n");
    scanf("%lf",&num1);
    printf("Enter second number!\n");
    scanf("%lf",&num2);
    printf("Enter the operator!\n");
    scanf(" %c",&operation);

    if (operation == '+')
    {
        printf("Addition: %.2f", num1 + num2);
    }
    else if (operation == '-')
    {
        printf("Subtraction: %.2f", num1 - num2);
    }
    else if (operation == '*')
    {
        printf("Multiplication: %.2f", num1 * num2);
    }
    else if ((operation == '/')&& (num2 != 0))
    {
        printf("Division: %.2f", num1 / num2);
    }
    else{
        printf("Enter valid operator\n");
    }
    return 0;
}
