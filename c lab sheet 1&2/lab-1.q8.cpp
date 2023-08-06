//wap to find compound interest for given principle amount,time and rate.
#include<stdio.h>
#include<math.h>
int main(){
        float p,t,r,ci;
         scanf("%f %f %f",&p,&t,&r);

            ci = p * (pow(1 + (r/100),t));
                printf("%.2f",ci);

        return 0 ;
}
