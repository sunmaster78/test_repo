#include<stdio.h>
int main()
{
    int m1[10][10],m2[10][10],m3[10][10],r1,c1,r2,c2,i,j,k;
    printf("\nEnter the first matrix row:");
    scanf("%d",&r1);
    printf("\nEnter the first matrix colume:");
    scanf("%d",&c1);
    printf("\nEnter the second matrix row:");
    scanf("%d",&r2);
    printf("\nEnter the second matrix colume:");
    scanf("%d",&c2);
    for(i=0;i<r1;i++)    // Matrix 1 input
    {
        for(j=0;j<c1;j++)
        {
            printf("\nEntr the Matrix 1 number :");
            scanf("%d",&m1[i][j]);
        }

    }
    for(i=0;i<r2;i++)    // Matrix 2 input
    {
        for(j=0;j<c2;j++)
        {
            printf("\nEntr the Matrix 2 number :");
            scanf("%d",&m2[i][j]);
        }

    }
    printf("we are the enter this first matrix:\n");  // Matrix 1 shown
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("we are the enter this second matrix:\n");  // Matrix 2 shown
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    
    if(c1==r2)   // logic
    {
        printf("\nMatrix multiplication is posibile\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                m3[i][j]=0;
                for(k=0;k<=r1;k++)
                {
                    m3[i][j]=m3[i][j]+(m1[i][k]*m2[k][j]);
                }

            }
        }
        printf("The miltiplication of Matrix is:\n");  // display outputof Matrix2
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",m3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not posibile\n");
    }
    return 0;
    
}