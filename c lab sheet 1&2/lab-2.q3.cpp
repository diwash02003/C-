//3.WAP to read 4-digit number and print the sum of each digit.
#include<stdio.h>
int main(){
    int a,n1,n2,n3,n4,sum;
    printf("Enter a four digit number: ");
    scanf("%d",&a);
    n4= a % 10;
    a = a / 10;
    n3= a % 10;
    a = a / 10;
    n2 = a % 10;
    a =  a / 10;
    n1 = a ;
                 sum = n1+n2+n3+n4;
                     printf("The sum of each digits is %d",sum);
return 0 ;
}
