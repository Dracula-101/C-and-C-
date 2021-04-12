#include<stdio.h>
void main()
{
	int n,a[100][3],year,i,j,temp;
	printf("Enter the current year:");
	scanf("%d",&year);
	printf("Enter the number of employees:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter employee's ID and age:");
		scanf("%d %d",&a[i][0],&a[i][1]);
		a[i][2]=65-a[i][1]+year;
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(a[j][2]>a[j+1][2])
			{
				temp=a[j][2];
				a[j][2]=a[j+1][2];
				a[j+1][2]=temp;
				temp=a[j][1];
				a[j][1]=a[j+1][1];
				a[j+1][1]=temp;
				temp=a[j][0];
				a[j][0]=a[j+1][0];
				a[j+1][0]=temp;
			}
		}
	}
	printf("|Retirement Year|Employee ID|Current Age|\n");
	printf("-----------------------------------------\n");
	for(i=0;i<=n-1;i++)
	{
		printf("|      %d     |    %d      |    %d     |\n",
		a[i][2],a[i][0],a[i][1]);
	}
}

