/*14. WAP using function to circularly shift their values given three variables x,
y, and z. In other words, if x = 5, y = 9, and z = 8; after circular shift the
result needs to be y = 5, z = 9, and x = 8. Call the function with variables a, b,
and c to circularly shift their values.*/

#include<stdio.h>
int shift(int x,int y,int z){
    int temp;
    temp = x;
    x=z;
    z=y;
    y=temp;
printf("After Shifting,y=%d,z=%d x=%d",y,z,x);
}

int main(){
    int a,b,c,value;
    printf("Enter the values of x,y and z respectively : ");
    scanf("%d %d %d",&a,&b,&c);
    printf("You entered x=%d y=%d,z=%d\n",a,b,c);
    value=shift(a,b,c);
}
