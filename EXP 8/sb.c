#include<stdio.h>
int backward_func(int,int);
int forward_func(int,int);
int  main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("The pattern of the following number %d is :",num);
    backward_func(num,num);
    return 0;
}                                                  
int  backward_func(int num,int temp)
{
    printf("%d ",num);
    if(num<=0)
    {
        forward_func(num,temp);
    }
    else
    {
        return backward_func(num-5,temp);
    }
   
}
int  forward_func(int num,int temp)
{
    if(num==temp)
    return 0;
    printf("%d ",num+5);
    return forward_func(num+5,temp);
}