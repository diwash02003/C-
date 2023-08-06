//8. WAP to compute the product of two matrices if possible.
#include <stdio.h>
int main()
{
    int i,j,M,N,M1,N1,k,mat[3][4],mat1[5][6],pro[5][5];
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
    printf("Enter the size M1 x N1 of matrix:\n");
    scanf("%d%d",&M1,&N1);
    printf("Size = %d x %d\n",M1,N1);
    printf("The element of second matrix is:\n");
    for (i=0;i<M1;i++)
    {
        for (j=0;j<N1;j++)
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
    for (i=0;i<M1;i++)
    {
        printf("\n");
        for ( j = 0; j < N1; j++)
        {
            printf("%d\t",mat1[i][j]);
        }
    }
    printf("\nProduct of two matrix is:\n");
    if (N==M1)
    {
        for(i=0;i<M;i++)
        for(j=0;j<N1;j++)
        {
            pro[i][j]=0;
        }
            for(i=0;i<M;i++)
            for(j=0;j<N1;j++)
            for(k=0;k<N;k++)
        {
            pro[i][j]=pro[i][j]+mat[i][k]*mat1[k][j];
        }

            for(i=0;i<M;i++)
            for(j=0;j<N1;j++)
        {
            printf("%d\t",pro[i][j]);
            if(j==N1-1)
            printf("\n");
        }
    }
    else
    printf("ERROR! column of first matrix not equal to row of second.\n");
}
