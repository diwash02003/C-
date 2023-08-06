//5. WAP that will convert tempr in centigrade into farenheit.
#include<stdio.h>
int main(){
	double c,f;
	scanf("%lf",&c);
	f = ((9/5.0)*c+32) ;
	printf("%.2lf",f);
	return 0 ;
}
