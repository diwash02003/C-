//WAP to read 10 integers, store it in array and display them.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i;
    printf("enter 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nYou entered:");
    for(i=0;i<10;i++)
        {
            printf("\t%d",a[i]);
        }
    return 0;
}
