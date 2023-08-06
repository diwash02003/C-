/*10. WAP to count digits of a given number using recursion.*/
#include<stdio.h>

int count(int n){
    static int c=0;

    if(n!=0){
        c++;
        count(n/10);

    }
return c;
}

int main(){
    int  num,value;
    printf("Enter the number : ");
    scanf("%d",&num);
    value = count(num);
    printf("The number %d has %d digits. ",num,value);
}
