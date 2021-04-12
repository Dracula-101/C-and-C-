#include<stdio.h>
int checkprime(int);
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(checkprime(num)==0)
    printf("The number is Prime, U fucking retard.");
    else
    printf("The number is not fucking prime.");
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