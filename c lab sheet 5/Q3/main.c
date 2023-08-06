//3. WAP to read a matrix, store it in array and display it.
#include <stdio.h>
int main()
{
    int mat[2][3],i,j;
    printf("Enter a 2 x 3 matrix:\n");
    for (i=0;i<=1;i++)
    {
        for (j=0;j<=2;j++)
        {
            printf(" mat[%d][%d] =\t",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nThe entered matrix is:\n");
    for (i=0;i<=1;i++)
    {
        printf("\n");
        for (j=0;j<=2;j++)
        {
            printf("%d\t",mat[i][j]);
        }
    }
}
