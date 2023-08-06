//4.WAP that asks the user for three numbers. Then determine the smallest number among them.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n ");
    scanf("%d %d %d",&a,&b,&c);
      if(a<b && a<c)
         printf("A is the smallest");

        else if(b<a && b<c)
                printf("B is the smallest");


                else
                        printf("C is the smallest");

        return 0;

}
