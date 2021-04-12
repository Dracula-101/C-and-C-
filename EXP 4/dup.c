#include<stdio.h>
void main()
{
    int len,min,temp;
    printf("Enter the elements of the array:");
    scanf("%d",&len);
    int a[len];
    for(int i=0;i<len;i++)
    {
        printf("Enter the %d element of the array:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]>a[j])   
             {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
             }
        }
    }
    for(int i=0;i<len;i++)
    {
        if(a[i]==0)
        continue;
        for(int j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    printf("The Array without the duplicates is:");
    for(int i=len-1;i>=0;i--)
    {
        if(a[i]==0)
        {
            continue;
        }
        else
        printf("%d ",a[i]);
    }
}