#include<stdio.h>
int count;
int checkprime(int);
void main()
{
   int low,up;
   printf("Enter the range of the  number for which prime numbers to be printed:");
   scanf("%d %d",&low,&up);
   printf("The prime numbers are:\n");
   while(low!=0)
   {
       int rem=low%10;
       for(int i=1;i<rem;i++)
       {
           printf("     ");
       }
       break;
   }
   for(int i=low;i<=up;i++)
   {
       if(i == 1)
       {
            printf("1    ");
            continue;
       }
       if (i%10==1)
       {
           printf("\n");
       }
       int res=checkprime(i);
       if (i<=10)
       {
           if(res==0)
           printf("%d*   ",i);
           else
           printf("%d    ",i);
       }
       else 
       {
           if(res==0)
           printf("%d*  ",i);
           else
           printf("%d   ",i);
       }
   }
}
int checkprime(int num)
{
    int i=2;
    while(num>i)
    {
        if(num%i==0)
        {
            return 1;
        }
        i++;
    }
    return 0;
}