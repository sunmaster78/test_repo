#include<stdio.h>
int main()
{
    int m[2][3], i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter the number :");
            scanf("%d",&m[i][j]);
        }
    }
    printf("We are input the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");

    }
    printf("\nTranspose the matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",m[j][i]);
        }
        printf("\n");
    }
    return 0;
}