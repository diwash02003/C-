/*12.WAP to read annual salary of an employee and declare the tax; print the actual amount received by the employee.
Upto 100000 = 0%
Upto 150000 = 15%
Above 150000 = 25% */
#include<stdio.h>
int main(){
        int sal;
        float sal1,tax;
        printf("Enter the Annual Sallary: ");
        scanf("%d",&sal);

        if(sal<=100000){
            tax = sal*0.00;
            printf("Tax = %.2f \n",tax);
            sal1= sal - tax ;
        }

        else if(sal>100000 && sal<=150000)  {
            tax = 0.15*sal;
            printf("Tax = %.2f \n",tax);
            sal1 = sal - tax ;
                                            }
        else if(sal>150000){
            tax = 0.25*sal ;
            printf("Tax = %.2f \n",tax);
        sal1 = sal - tax ;
                            }
    printf("Amount Received = %.2f ",sal1);

return 0;
}Isosceles Triangle ");

         else
             printf("Scalene Triangle ");


        }

        else printf("Not a Triangle ");
return 0;
}
