#include <stdio.h>
void main()
{
    int num1,num2,max,gcd;
    printf("Enter the numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    max=num1;
    else
    max=num2;
    for(int i=1;i<=max;i++)
    {
        if(num1%i==0 && num2%i==0)
        gcd=i;
    }
    if(gcd==1)
    printf("The GCD of the numbers does not exist.");
    else
    printf("The GCD of the numbers is : %d\n",gcd);
    
    printf("The LCM of the numbers is: %d",(num1*num2)/gcd);
}
