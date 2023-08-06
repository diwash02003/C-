//2.WAP to read 3-digit number from user and display each digit separately.
#include<stdio.h>
int main(){
    int a,n1,n2,n3;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    n3= a % 10;
    a = a / 10;
    n2 = a % 10;
    a =  a / 10;
    n1 = a ;
          printf("%d %d %d",n3,n2,n1);
return 0 ;
}
