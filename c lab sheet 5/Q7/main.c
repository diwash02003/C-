//7. WAP to find the sum of squares in a diagonal of a square matrix.
#include <stdio.h>
#include <math.h>
int main()
{
     int i,j,M,N,mat[5][6],sumdig,sum=0;
    printf("Enter the size M x N of matrix:\n");
    scanf("%d",&M);
    N=M;
    printf("Size = %d x %d\n",M,N);
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            printf("mat[%d][%d] =\t",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
  printf("\nThe entered matrix is:\n");
  for (i=0;i<M;i++)
        {
            printf("\n");
        for (j=0;j<N;j++)
         {
            printf("%d\t",mat[i][j]);
         }
        }
    for (i=0;i<M;i++)
        {
            for (j=0;j<N;j++)
            if (i==j)
            {
                sumdig=sum+pow(mat[i][j],2);
                sum=sumdig;
            }
        }
    printf("\nThe sum of squares in a diagonal of a square matrix:  %d",sumdig);

}
