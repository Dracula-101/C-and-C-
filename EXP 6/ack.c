#include<stdio.h>
long long int count;
int find_ack(int,int);
void main()
{
	int i,j,u1,l1,u2,l2;
    int value;
    int n1,n2;
    count=0;
    printf("Enter 1 for single value or 2 for range of the numbers:");
    scanf("%d",&value);
    switch(value)
    {
        case 1:
        printf("The value of m and n: ");
        scanf("%d %d",&n1,&n2);
        printf("A(%d,%d)=%d ",n1,n2,find_ack(n1,n2));
        break;
        case 2:
        printf("Enter the range of the first value:");
        scanf("%d %d",&l1,&u1);
        printf("Enter the range of the second value:");
        scanf("%d %d",&l2,&u2);
        printf("The Ackerman's values of the number are given below:\n");
        for(i=l1;i<=u1;i++)
        {
            for(j=l2;j<=u2;j++)
            {
                printf("A(%d,%d)=%d \n",i,j,find_ack(i,j));
            }
        }
    }
}
int find_ack(int n1,int n2)
{
    if(n1==0)
    {
        return (n2+1);
    }
    else if(n2==0)
    {
        return find_ack(n1-1,1);
    }
    else if(n1!=0 && n2!=0)
    {
        return find_ack(n1-1,find_ack(n1,n2-1));
    }
}
