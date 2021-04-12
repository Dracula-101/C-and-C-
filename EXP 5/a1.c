#include<stdio.h>
int nemp;
void employee(int emp[nemp][3],int);
void sort(int emp[nemp][3],int);
void result(int emp[nemp][3]);
void main()
{
    int nyear;
    printf("Enter the number of employees and current year:");
    scanf("%d %d",&nemp,&nyear);
	int emp[nemp][3];
    employee(emp,nyear);
	sort(emp,nyear);
    result(emp);
}
void employee(int emp[nemp][3], int year)
{
    for(int i=0;i<nemp;i++)
	{
		printf("Enter employee's ID and age:");
		scanf("%d %d",&emp[i][0],&emp[i][1]);
	    emp[i][2]=65-emp[i][1]+year;
	}
}
void sort(int emp[nemp][3],int year)
{
    int temp;
    /*for (int i=0;i<nemp;i++)
    {
        emp[i][2]=0;
    }
    for(int i=0;i<nemp;i++)
    {
        int j=0;
        temp=year-emp[i][1]+65;
        emp[i][2]=temp;
    }*/
    for(int i=0;i<=nemp-2;i++)
	{
		for(int j=0;j<=nemp-2;j++)
		{
			if(emp[j][2]>emp[j+1][2])
			{
                int swap;
				swap=emp[j][2];
				emp[j][2]=emp[j+1][2];
				emp[j+1][2]=swap;
				swap=emp[j][1];
				emp[j][1]=emp[j+1][1];
				emp[j+1][1]=swap;
				swap=emp[j][0];
				emp[j][0]=emp[j+1][0];
				emp[j+1][0]=swap;
			}
		}
	}
} 
void result(int emp[nemp][3])
{
    printf("\nList of people retiring:\n");
    printf("| RETIRES IN | EMPLOYEE ID | CURRENT AGE |\n");
	printf("-----------------------------------------\n");
	for(int i=0;i<nemp;i++)
	{
		printf("|      %d     |    %d      |    %d     |\n",
		emp[i][2],emp[i][0],emp[i][1]);
	}
}   