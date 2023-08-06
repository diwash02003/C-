/*WAP to find nth term of Fibonacci series using recursive function.*/
#include<stdio.h>
int fib(int num){
    if(num==0 || num==1){
        return num;
    }
    else return fib(num-1)+fib(num-2) ;
}
int main(){
    int n;
    printf("Enter no. of terms for series : ");
    scanf("%d",&n);

        printf("%d ",fib(n));

return 0;
}
