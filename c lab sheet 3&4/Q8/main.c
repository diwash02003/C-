#include<stdio.h>
int main(){
                int num[5],sum=0,i;
                int per,a ;
            printf("Enter marks of 5 subjects(full marks=100): ");
                for(i=0;i<5;i++){
                    scanf("\n%d",&num[i]);
                        sum = sum + num[i];
                }
            for(i=0;i<5;i++){

        if(num[i]>=80 &&num[i]<=100)
             printf("Subject-%d: A \n",i+1);

        else if(num[i]>=60 && num[i]<=70)
             printf("Subject-%d: B \n",i+1);

        else if(num[i]>=50 && num[i]<=59)
             printf("Subject-%d: C \n",i+1);

        else if(num[i]>=40 && num[i]<= 49)
             printf("Subject-%d: D \n",i+1);

        else if(num[i]<40)
             printf("Subject-%d: F \n",i+1);
             else printf("invalid\n",i+1);
            }
return 0;
}
