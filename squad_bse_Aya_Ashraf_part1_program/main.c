#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_1, num_2, num_3;

    printf("Enter first number!\n");
    scanf("%d", &num_1);
    printf("Enter second number!\n");
    scanf("%d", &num_2);
    printf("Enter third number!\n");
    scanf("%d", &num_3);
    float sum = 0.0;
    sum = num_1 + num_2 + num_3;
    float average = 0.0;
    average = sum/3;
    printf("The 3 numbers sum is %.2f\nThe 3 numbers average is %.2f\n",sum,average);
    return 0;
}
