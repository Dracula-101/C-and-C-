#include<stdio.h>
int amicable(int,int);
void main()
{
  int num1,num2;
  printf("Enter the numbers to be checked:");
  scanf("%d %d",&num1,&num2);
  amicable(num1,num2);
}
int amicable(int n1,int n2)
{
  int sum1,sum2;
  sum1=0;
  sum2=0;
  for(int i=1;i<n1;i++)
  {
    if(n1%i==0)
	{
      sum1=sum1+i;	
	}
  }
  for(int i=1;i<n1;i++)
  {
    if(n2%i==0)
	{
      sum2=sum2+i;	
	}
  }
  if (sum1==n1 && sum2==n2)
  {
    return printf("TRUE");
  }
  else
  {
    return printf("FALSE");
  }
}