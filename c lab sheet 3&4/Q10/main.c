/*10.WAP to calculate:
Sum
Difference
Multiplication
Division
of two numbers by reading the user’s choice. */

#include<stdio.h>
int main(){
    int a,b,sum,diff,mult;
    float div;
            printf("Enter any two numbers:");
                scanf("%d %d",&a,&b);
        sum = a+b;
        if (a>b)
        diff = a-b;
        else
            diff=b-a;
        mult = a*b;
        div = a/b ;

    printf("Sum=%d\nDifference=%d\nMultiplication=%d\nDivision=%f\n",sum,diff,mult,div);


return 0;
}
