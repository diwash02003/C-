//WAP to read two numbers n1 and n2 from keyboard. Calculate and display remainder obtained by dividing n1 by n2.
#include<stdio.h>
int main(){
    int n1,n2,rem;
    printf("Enter n1 and n2: ");
    scanf("%d %d",&n1,&n2);
    rem = n1 % n2 ;
    printf("%d",rem);
return 0;
}
