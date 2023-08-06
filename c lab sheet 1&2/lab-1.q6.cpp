// 6. //WAP that will ask temp in fah from user convert and display it in centigrade
#include<stdio.h>
int main(){
 	float f , c ;
 	scanf("%f",&f);
 	c = (f - 32)* 5.0/9 ;
 	printf("Temperature in celcius is %.2f",c);
 	return 0;
 }
