//Two numbers are input through the keyboard into two variables A and B. WAP to swap the content of A and B.
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two numbers A & B :");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("The value is swaped where A=%d and B=%d",a,b);
return 0;
}
