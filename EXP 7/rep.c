#include<stdio.h>
#include<string.h>
int nwords;
int space(char str1[],int);
void fill_str(char str_dup[nwords][15],char str[]);
void dup_remove(char str_dup[nwords][15],char str[]);
void display(char str_dup[nwords][15]);
void main()
{
    char str[100];
    int len,count;
    int i,j=0,row=0;
    printf("Enter a Sentence:\n");
    gets(str);
    len=strlen(str);
    nwords=space(str,len);
    char str_dup[nwords][15];
    printf("The sentence without duplicates is :");
    fill_str(str_dup,str);
    dup_remove(str_dup,str);
    display(str_dup);   
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
    int i,j=0;
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
    str_dup[i][j+1]='\0';
} 
void dup_remove(char str_dup[nwords][15],char str[])
{
    int i,j;
    for(i=0;i<nwords;i++)
    {
        for(j=i+1;j<nwords;j++)
        {
            if(strcmp(str_dup[i],str_dup[j])==0)
            {
                int col=0;
                while(str_dup[j][col]!='\0')
                {
                    str_dup[j][col]='\0';
                    col++;
                }
            }
        }
    }
}
void display(char str_dup[nwords][15])
{
    int i,j;
    for(i=0;i<nwords;i++)
    {
        for(j=0;str_dup[i][j]!='\0';j++)
        {
            if(str_dup[i][j]=='\0')
            continue;
            printf("%c",str_dup[i][j]);
        }
        printf(" ");
    }
}
