#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNum = 5;
    int guess;
    while(guess != secretNum)
    {
         printf("Enter a number!\n");
         scanf("%d", &guess);
    }
   printf("You win!");
    return 0;
}
