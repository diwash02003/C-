/*WAP to find the sum of 1+11+111+1111+... using recursive function. Ask
users the number of terms. For example if users says 4, find the sum of
1+11+111+1111.*/


#include<stdio.h>
int sum(int n){
 if(n<=0){
     return 0;
 }
     else
       return (n+10*sum( n-1 )) ;
}

int main(){
    int num,value;
    printf("Enter number of terms : ");
    scanf("%d",&num);
    value = sum(num);
    printf("Sum = %d ",value);
return 0;
}
