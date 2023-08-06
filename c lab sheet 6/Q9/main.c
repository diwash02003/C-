/*9. WAP to find sum of natural numbers using recursion.*/
#include<stdio.h>
int sum(int n){
    if(n!=0)
    { return n+sum(n-1);}
    else {return n;}

}
int main(){
    int num,sum1;
    printf("Enter a number : ");
    scanf("%d",&num);
    sum1 = sum(num);
    printf("The sum of %d natural numbers is %d ",num,sum1);
    return 0;
}
