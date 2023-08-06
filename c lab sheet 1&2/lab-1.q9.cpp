/*The length and breadth of a rectangle are input through the keyboard.
WAP to calculate the area and perimeter of the rectangle. */

#include<stdio.h>
int main(){
            float l,b,a,p;
                printf("Enter the length and breadth of the Rectangle (Seperated with Spaces): ");
                        scanf("%f %f",&l,&b);
                        a = l*b;
                            p = 2*(l+b);
                printf("The area of the Rectangle is %.2f m.sq and the perimeter is %.2f m",a,p);

return 0 ;

}
