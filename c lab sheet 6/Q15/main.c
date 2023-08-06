/*WAP to multiply two matrices using function.*/


#include<stdio.h>

void mult(int mat1[3][3], int mat2[3][3]) {
    int rslt[3][3];

    printf("Multiplication of given two matrices is:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            rslt[i][j] = 0;

            for (int k = 0; k < 2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }

            printf("%d\t", rslt[i][j]);
        }

        printf("\n");
    }
}
int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, i, j, k;
    printf("Enter first 2*2 matrix element: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter second 2*2 matrix element: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            scanf("%d", &mat2[i][j]);
    }
        mult(mat1,mat2);
    return 0;
}
