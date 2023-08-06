/*13.WAP to sort a set of n numbers in ascending order using function.*/

#include<stdio.h>

int sort(int number){
    int i,j,temp,num[50];
    for(i=0;i<number;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<number-1;i++){
            for(j=0;j<number-1-i;j++){
                if(num[j]>num[j+1]){
                    temp = num[j];
                    num[j]=num[j+1];
                    num[j+1]=temp;
                }
            }

    }
    printf("The elements in ascending orders are : ");
    for(i=0;i<number;i++){
        printf("%d\t",num[i]);
    }
return 0;
}

int main(){
    int n,sorting;
    printf("Enter the number of elements to be sorted : ");
    scanf("%d",&n);
    sorting = sort(n);
return 0;
}
