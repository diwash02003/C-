#include<stdio.h>
int add(int r1 ,int i1,int r2,int i2){
    int sumr=r1+r2;
    int sumi=i1+i2;
    printf("Sum = %d+%di ",sumr,sumi);
}
int sub1(int r1 ,int i1,int r2,int i2){
    int difr=r1-r2;
    int difi=i1-i2;
    printf("Difference = %d+%di ",difr,difi);
}

int main(){
    int a1,b1,a2,b2,sum,sub;
    printf("Enter the values of a,b from a+ib for 1st complex number: ");
    scanf("%d %d",&a1,&b1);
        printf("Enter the values of a,b from a+ib for 2nd complex number: ");
    scanf("%d %d",&a2,&b2);

    sum=add(a1,b1,a2,b2);
    sub=sub1(a1,b1,a2,b2);
}
