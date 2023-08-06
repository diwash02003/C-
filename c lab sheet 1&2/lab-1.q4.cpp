/*4.wap to calculate area betwen two circle having radius r1 and r2. Take r1 and r2 from input and use symbollic constant for
pi.*/
#include<stdio.h>
#define pi 3.14
int main(){
	int r1,r2,a1,a2;
	float a,A,B ;
	scanf("%d %d",&r1,&r2);
	a1 = pi*r1*r1;
	a2 = pi*r2*r2;
	A = a1 - a2 ;
	 B = a2-a1 ;
	a = r1>r2?A:B ;

	 printf("The area between the circles is %.2lf m.sq.",a);
	return 0 ;
}
