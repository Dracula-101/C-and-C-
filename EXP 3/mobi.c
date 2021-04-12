#include<stdio.h>
int prime(int);
int factor(int);
int mobius(int);
void main()
{
  int num;
  printf("Enter the number to check if it is Mobius:");
  scanf("%d*",&num);
  printf("M(%d)=(",num);
  mobius(num);
  printf(") [%d=",num);
  factor(num);
  printf("]");
}
int prime(int n)
{
	if(n<2)
    return 0;  
	for(int i=2;i<n/2;i++)
	{
        if(n%i==0)
		return 0;
	}
	return 1;
}
int mobius(int n)
{
	int count=0;
	if(n==1)
	return printf("1");
	for(int i=2;i<=n;i++)
	{
		if(n%i==0 && prime(i))
		{
			if(n%(i*i)==0)
			{
				return printf("0");
			}
			else
			count++;
		}
	}
	if(count%2==0)
    return printf("1");
	else
	return printf("-1");

}
int factor(int n)
{
	if(n==1)
	{
		return printf("1");
	}
	while(n%2==0)
	{
		printf("*2");
		n=n/2;
	}
	for(int i=3;i<n;i=i+2)
	{
		while(n%i==0)
		{
			printf("*%d",i);
			n=n/i;
		}
	}
	if(n>2)
	printf("*%d",n);
	return 0;
}