//3.WAP that asks the user for three numbers. Then determine the largest number among them.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n ");
    scanf("%d %d %d",&a,&b,&c);
      if(a>b && a>c)
         printf("A is the largest ");

        else if(b>a && b > c)
                printf("B is the largest");

                else
                        printf("C is the largest");

        return 0;

}
