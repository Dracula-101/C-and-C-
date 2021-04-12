#include<stdio.h>
#include<string.h>
struct new
{
    int c;
    char string[20];
};
void display(struct new arr,int n)
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    strcpy(arr.string,str);
    printf("Bruh");
    arr.c=n;
    printf(" String=%s  Number:%d ",arr.string,arr.c);

}
void main()
{
    int num;
    printf("Enter a Value:");
    scanf("%d",&num);
    struct new arr;
    display(arr,num);
}