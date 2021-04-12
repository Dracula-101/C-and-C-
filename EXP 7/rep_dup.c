#include<stdio.h>
#include<string.h>
int space(char str1[],int);
void main()
{
    char str[100];
    int len,count;
    int i,j=0,row=0;
    printf("Enter a Sentence:\n");
    scanf("%[^\n]s", str);
    len=strlen(str);
    int nwords=space(str,len);
    char str_dup[nwords][15];
    printf("The sentence without duplicates is :");
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
