//WAP to read height and base of a triangle and find area of it.

#include<stdio.h>
int main(){
            float h,b,a;
                printf("Enter the length of base and breadth of Triangle (Seperated with Spaces): ");
                        scanf("%f %f",&b,&h);
                        a = 0.5*b*h;
                printf("The area of the Triangle is %.2f m^2. ",a);

return 0 ;

}


