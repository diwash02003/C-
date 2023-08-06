/*7. WAP to find HCF (GCD) and LCM using recursive function.*/
 #include<stdio.h>
 int hcf(int a , int b){
     if(b==0)
     return a;

     else return hcf(b,a%b);

 }

 int main(){
     int a,b,hcf1,lcm;
     printf("Enter two numbers :");
     scanf("%d %d",&a,&b);

     hcf1= hcf(a,b);
     lcm= (a*b)/hcf1;

     printf("HCF = %d & LCM = %d",hcf1,lcm);

    return 0;
 }
