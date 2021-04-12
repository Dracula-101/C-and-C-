#include<stdio.h>
int sel_sort(int a[],int);
int bin_search(int a[],int,int);
void main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements of the array seperated by a comma:");
	for(i=0;i<n;i++)
    {
        scanf("%d,",&a[i]);
    }
    printf("\nThe sorted array is :");
    sel_sort(a,n);
    int num;
    printf("\nEnter a number to be searched:");
    scanf("%d",&num);
	if(bin_search(a,num,n)==0)
	{
	    printf("Number not found.");
	}
	else
    printf("The number is at %d position", bin_search(a,num,n));
}
int sel_sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
       for(int j=i;j<n;j++)
       {
           if(a[i]>a[j])
           {
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
           }
       }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
}
int bin_search(int a[],int n,int length)        
{
    int left,right,mid;
    left=0;
    right=length-1;
    mid=(left+right)/2;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==n)
        {
			return mid+1;
        }
        else if(n>a[mid])
        {
            left=mid+1;
        }
        else
        right=mid-1;
    }
	return 0;
}