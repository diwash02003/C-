/*8.WAP to reverse a number using recursive function.*/
#include<stdio.h>
int rev(int n ,int m){
    if(n==0){
        return m;
    }
    else  return rev(n/10,m*10+n%10);
}

int main(){
    int num,reverse;
    printf("Enter the number : ");
    scanf("%d",&num);
    reverse = rev(num,0);
    printf("The reverse of %d is %d ",num,reverse);
}
