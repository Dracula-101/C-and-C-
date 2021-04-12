#include<stdio.h>
int r1,c1,r2,c2;
void input(int arr1[r1][c1],int arr2[r2][c2]);
void mult(int arr1[r1][c1],int arr2[r2][c2]);
void display(int res[r1][c2]);
void main()
{
    printf("Enter the dimensions of the first matrix(row x column):");
    scanf("%dx%d",&r1,&c1);
    printf("Enter the dimensions of the second matrix(row x column):");
    scanf("%dx%d",&r2,&c2);
    if(c1!=r2)
	{
		printf("The matrix multiplication of the matrix is not possible");
    }
    else
    {
        int arr1[r1][c1], arr2[r2][c2];
        int res[r1][c2];
        input(arr1,arr2);   
        mult(arr1,arr2);
    }
}
void input(int arr1[r1][c1],int arr2[r2][c2])
{
    printf("Enter the elements of the first array:");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
	printf("Enter the elements of the second array:");
	for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
}
void mult(int arr1[r1][c1],int arr2[r2][c2])
{
    int res[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            res[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                res[i][j]=res[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
    display(res);
}
void display(int res[r1][c2])
{
    printf("The multiplied matrix with %dx%d dimensions is :\n",r1,c2);
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
