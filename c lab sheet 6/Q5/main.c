//5.WAP to find power of a number using recursive function.

#include<stdio.h>

int powernum(int base,int power){
    if(power==0){
        return 1;
    }
    else return base*powernum(base,power-1);
}

int main(){
    int a,n,result;
    printf("Enter the base number : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&n);
    result = powernum(a,n);
    printf("Result = %d",result);
    return 0;
}
