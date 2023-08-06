//5. WAP to read two M*N matrices and display their sum/difference.
#include <stdio.h>
int main()
{
    int i,j,M,N,mat[3][4],mat1[5][6],sum[5][5],diff[5][5];
    printf("Enter the size M x N of matrix:\n");
    scanf("%d%d",&M,&N);
    printf("Size = %d x %d\n",M,N);
    printf("The element of first matrix is:\n");
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            printf("mat[%d][%d] =\t",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The element of second matrix is:\n");
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            printf("mat[%d][%d] =\t",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nthe entered first matrix is:\n");
    for (i=0;i<M;i++)
    {
        printf("\n");
        for ( j = 0; j < N; j++)
        {
            printf("%d\t",mat[i][j]);
        }
    }
    printf("\nThe entered second matrix is:\n");
    for (i=0;i<M;i++)
    {
        printf("\n");
        for ( j = 0; j < N; j++)
        {
            printf("%d\t",mat1[i][j]);
        }
    }
    for (i=0;i<M;i++)
    for (j=0;j<N;j++)
    {
        sum[i][j]=mat[i][j]+mat1[i][j];
        diff[i][j]=mat[i][j]-mat1[i][j];
    }
    printf("\nThe sum of two matrix is:\n");
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            printf("%d\t",sum[i][j]);
            if(j==N-1)
            {
               printf("\n");
            }
        }
    }
    printf("\nThe difference of two matrix is:\n");
    for (i=0;i<M;i++)
    for (j=0;j<N;j++)
    {   printf("%d\t",diff[i][j]);
        if(j==N-1)
        {
            printf("\n");
        }
    }
}
