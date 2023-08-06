//3.WAP to calculate area and circumference of the cicle having radius r.The radius should ask user for radius.
#include<stdio.h>
int main(){
	float r,a,c;
	scanf("%f",&r);
	a = 3.14*r*r ;
	c = 2*3.14*r;
	printf("The area of the circle is %.2f meter square and the circumference is %.2f m.",a,c);
	return 0 ;
}
