#include<stdio.h>
void main ()
{

	int num,arm,sum=0;
	printf("Enter the number to be checked: \n");
	scanf("%d",&num);
	arm=num;
	while(num>0)
	{
		int rem=num%10;
		num=num/10;
		sum =sum+(rem*rem*rem);

	}
	if(sum==arm)
	{
		printf("The number is an amstrong number");
	}
	else
	{
		printf("The number is not an armstrong number ");
	}
}
