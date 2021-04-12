#include <stdio.h>
#include<string.h>
int nwords;
int space(char str1[],int);
void fill_str(char str_dup[nwords][15],char str[]);
void reverse(char str_dup[nwords][15],char str[]);
void main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    int i,len=strlen(str);
    nwords=space(str,len);
    char str_dup[nwords][15];
    fill_str(str_dup,str);
    char swap_char;
    printf("The string in reverse is:\n");
    reverse(str_dup,str);
}
int space(char str[],int len)
{
    int nspaces=0;
    int i;
    for(i=0;i<len-1;i++)
    {
        if(str[i]==' ')
        nspaces++;
    }
    return nspaces+1;
}
void fill_str(char str_dup[nwords][15],char str[])
{
    int row=0;
    int i,k,j=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str_dup[row][j]='\0';
            row++;
            j=0;
        }
        else 
        {
            str_dup[row][j]=str[i];
            j++;
        }
    }
    str_dup[row][j]='\0';
}
void reverse(char str_dup[nwords][15],char str[])
{
    int i;
    for(i=nwords;i>=0;i--)
    {
        printf("%s",str_dup[i]);
        printf(" ");
    }
}