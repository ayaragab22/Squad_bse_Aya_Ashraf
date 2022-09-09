#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char plural_noun[20];
    char celebrity[20];

    printf("Enter a color!\n");
    scanf("%s", color);
    printf("Enter a plural noun!\n");
    scanf("%s", plural_noun);
    printf("Enter a celebrity!\n");
    scanf("%s", celebrity);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", plural_noun);
    printf("I love %s\n", celebrity);
    return 0;
}
