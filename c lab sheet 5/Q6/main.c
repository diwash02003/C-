//6. WAP to find transpose of a matrix.
#include <stdio.h>
int main()
{
     int i,j,M,N,mat[5][6],tra[5][6];
    printf("Enter the size M x N of matrix:\n");
    scanf("%d%d",&M,&N);
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
    for (j=0;j<N;j++)
    {
        tra[i][j]=mat[j][i];
    }
    printf("\nThe transpose of a matrix is:\n");
    for (i=0;i<M;i++)
    {
        printf("\n");
        for (j=0;j<N;j++)
        {
            printf("%d\t",tra[i][j]);
        }
    }

}
