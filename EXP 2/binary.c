#include<stdio.h>
#include<conio.h>
#include<math.h> 	 	 
void main()
{
	char s;
	printf("Enter 'd' for Binary to Decimal conversion OR Enter 'b' for Decimal to Binary conversion \n");
	scanf("%c",&s);
	if (s=='b')
   {
    int num,i=0;
	char a[100];
	printf("Enter the decimal number to be converted in binary :\n");
	scanf("%d",&num);
	int num1=num;
	while(num1!=0)
	{
		a[i]=num1%2;
		i++;
		num1=num1/2;
	}
	  printf("Enter the binary conversion is:");
	for(i=i-1;i>=0;i--)
	{
	  
		printf("%d",a[i]); 
	}
   }
	else if(s=='d')
	{
      int i=0;
	  long bin,bin1;
	  long sum=0,count;
	  printf("Enter the Binary number:");
	  scanf("%ld",&bin);
	  //printf("%ld",bin);
	  bin1=bin;
	  while (bin1!=0)
	  {
		  count=(bin1)%10;
		  bin1=bin1/10;
		  sum=sum+count*pow(2,i);
		  i++;
		  
	  }
     printf("The Converted Decimal number is:");
     printf("%ld",sum);
	  
	}
	getch();
}
