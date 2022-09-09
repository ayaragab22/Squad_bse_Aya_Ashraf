#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("Enter Height\n");
    scanf("%d",&height);

    if(height>1 && height <6)
    {
        for(int i=0;i<height;i++)
    {
        for(int j=i;j<height;j++)
            printf(" ");
        for(int j=i;j>0;j--)
            printf("*");
        for(int j=i;j>=0;j--)
            printf("*");
        printf("\n");
    }
    }

    return 0;
}
