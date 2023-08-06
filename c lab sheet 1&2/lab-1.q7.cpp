//wap tp calculate the simple interest and take p t r from user.
#include<stdio.h>
int main(){
 	int p,t,r,i;
 	printf("Please enter the Principle,Time and Rate of interest;");
 	scanf("%d %d %d",&p,&t,&r);
 	i = p*t*r/100 ;
 	printf("The Simple Interest is %d :",i);
 	return 0 ;
 }
