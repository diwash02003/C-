//WAP to input the n numbers and sort them in descending order.
#include <stdio.h>
#include <stdlib.h>

void main()
{
   int num[30],i,j,a,n;
   printf("Enter the value of N:\n");
   scanf("%d",&n);
   printf("Enter the numbers\n");
   for(i=0;i<n;i++)
    scanf("%d",&num[i]);
   for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            {
                if(num[i]<num[j])
                {
                    a=num[i];
                    num[i]=num[j];
                    num[j]=a;
                }
            }
    }
     printf("The numbers arranged in descending order are given below\n");

        for (i = 0; i < n; ++i)
        {
            printf("%d\t", num[i]);
        }
}
