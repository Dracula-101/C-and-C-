#include<stdio.h>
int print_pat1(int);
int print_pat2(int,int);
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("The pattern of the %d is:",num);
    print_pat1(num);
}
int print_pat1(int num)
{
    int static count=0;
    printf("%d ",num);
    if(num<0)
    {
        print_pat2(num+5,count);
    }
    else
    {
        count++;
        return print_pat1(num-5);
    }
}
int print_pat2(int num,int count)
{
    if(count>0)
    {
        printf("%d ",num);
        count--;
        return print_pat2(num+5,count); 
    }
    else
    {
        return 0;
    }
}