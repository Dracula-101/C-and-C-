#include<stdio.h>
int strcmpy(char str1[],char str2[]);
int strcat(char str1[],char str2[]);
void main()
{
    char str1[100],str2[100];
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);
    int s,dif;
    printf("1 for string compare and 2 for string concatenates:");
    scanf("%d",&s);
    switch(s)
    {
        case 1:
        dif=strcmpy(str1,str2);
        printf("The comparison between the strings is :%d",dif);
        break;
        case 2:printf("The two strings when cancatonated is:");
        strcat(str1,str2);
        puts(str1);
    }
    
}
int strcmpy(char str1[],char str2[])
{
    int i;
    int diff,min;
    int len1=0,len2=0;
    for(i=0;str1[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        len2++;
    }
    if(len1>len2)
    min=len2;
    else
    min=len1;
    diff=str1[min-1]-str2[min-1];
    return diff;
}
int strcat(char str1[],char str2[])
{
    int i,j,len1=0,len2=0;
    for(i=0;str1[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        len2++;
    }
    j=0;
    for(i=len1;i<len1+len2;i++)
    {
        str1[i]=str2[j];
        j++;
    }
    str1[i]='\0';
    return 0;
}