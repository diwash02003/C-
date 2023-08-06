/*11.WAP to check whether a given number is prime or not using recursion.*/
#include<stdio.h>

int prime(int n ,int i){
    if(i!=1){
        if(n%i!=0){
            return prime(n,i-1);
                    }
                    else return 0;
    }
    else return 1;
}
void main(){
    int num,value;
    printf("Enter the number : ");
    scanf("%d",&num);
    value = prime(num,num/2);
    if(value==1){
        printf("%d is a Prime Number",num);
    }
    else printf("%d is not a prime number ",num);
}
