/*WAP to find sum of digit of number using recursive function. For example,
if user gives 482, then calculate 4+8+2.*/


#include<stdio.h>

int sod(int n){
    if(n==0){
        return 0;
    }

    else {
            int value = (n%10)+sod(n/10);
            return(value);
    }
}
int main(){
    int num,value;
    printf("Enter number : ");
    scanf("%d",&num);
    value = sod(num);
    printf("Sum= %d",value);
return 0 ;
}
