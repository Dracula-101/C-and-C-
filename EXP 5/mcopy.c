#include<stdio.h>
void input(int ,int,int,int,int arr1[10][10],int arr2[10][10]);
void mult(int, int, int ,int,int arr1[10][10],int arr2[10][10]);
void display(int, int, int ,int,int result[10][10]);
void main()
{
    int r1,c1,r2,c2;
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
        int result[r1][c2];
        input(r1,r2,c1,c2,arr1,arr2);   
        mult(r1,r2,c1,c2,arr1,arr2);
        display(r1,r2,c1,c2,result);
    }
}
void input(int r1,int r2,int c1,int c2,int arr1[r1][c1],int arr2[r2][c2])
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
void mult(int r1,int r2,int c1,int c2,int arr1[r1][c1],int arr2[r2][c2])
{
    int result[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            result[i][j]=0;
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for(int k=0;k<c1;k++)
            {
                result[i][j]=result[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }
}
void display(int r1,int r2,int c1,int c2,int result[r1][c2])
{
    printf("The multiplied matrix with %dx%d dimensions is :\n",r1,c2);
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
