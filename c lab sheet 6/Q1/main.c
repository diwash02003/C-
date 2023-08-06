//1.WAP to find factorial of a number using recursion.
#include<stdio.h>
int fact(int n){
    int res;
    if(n==1)
    return 1;

    else
     res = n * fact(n-1);
    return res;
}

void main(){
    int num,value;
    printf("Enter the Number : ");
    scanf("%d",&num);
    value = fact(num);
printf("The Factorial of %d is %d",num,value);

}
