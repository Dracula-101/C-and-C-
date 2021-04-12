#include<stdio.h>
void employee(int emp[][3],int,int);
void sort(int emp[][3],int,int);
void result(int emp[][3],int);
void main()
{
    int nemp,nyear;
    printf("Enter the number of employees and current year:");
    scanf("%d %d",&nemp,&nyear);
    int emp[nemp][3];
    employee(emp,nyear,nemp);
    sort(emp,nyear,nemp);
    result(emp,nemp);
}
void employee(int emp[][3], int year,int nemp)
{
    for(int i=0;i<nemp;i++)
    {
        int j=0;
        printf("Enter the Employee Id of EMP%d :",i+1);
        scanf("%d",&emp[i][j]);
        j++;
        printf("Enter the Age of the EMP%d :",i+1);
        scanf("%d",&emp[i][j]);
    }
    
}
void sort(int emp[][3],int year,int nemp)
{
    int temp;
    for(int i=0;i<nemp;i++)
    {
        int j=0;
        temp=year-emp[i][1]+65;
        emp[i][2]=temp;
    }
    for(int i=0;i<nemp;i++)
    {
        for(int j=i;j<nemp;j++)
        {
            if(emp[i][2]>emp[j][2] )
            {
                int swap;
                swap=emp[i][2];
                emp[i][2]=emp[j][2];
                emp[j][2]=swap;
                swap = emp[i][1];
                emp[i][1] = emp[j][1];
                emp[j][1] = swap;
                swap = emp[i][0];
                emp[i][0] = emp[j][0];
                emp[j][0] = swap;
            }

        }
    }
} 
void result(int emp[][3],int nemp)
{
    printf("\nList of people retiring:\n");
    printf("ID\tAGE\tRetires in \n");
    for (int i=0;i<nemp;i++)
    {
        for (int j=0;j<3;j++)
        {
            if(emp[i][j]!=0)
            {
                printf("%d \t", emp[i][j]);
            }
        }
        printf("\n");
    }    
}