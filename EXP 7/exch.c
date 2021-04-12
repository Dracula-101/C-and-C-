#include<stdio.h>
#include<string.h>
int space(char str1[],int);
void fill_str(char str_dup[][15],char str[]);
int check(char str_dup[][15],char str[],char rep_word[],int);
void replace(char str_dup[][15],char rep_word[],char new[],int);
void display(char str_dup[][15],int );
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
    fill_str(str_dup,str);
    char rep_word[20],new[20];
    printf("Enter the word to be replaced\n");
    scanf("%s",rep_word);
    if(check(str_dup,str,rep_word,nwords)==1)
    {
        printf("Word found....Enter the word to be replaced it with\n");
        scanf("%s",new);
        replace(str_dup,rep_word,new,nwords);
        display(str_dup,nwords);   
    }
    else 
    printf("Word not found.");
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
void fill_str(char str_dup[][15],char str[])
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
int check(char str_dup[][15],char str[],char rep_word[],int nwords)
{
    int i,j;
    for(i=0;i<nwords;i++)
    {
        if(strcmp(str_dup[i],rep_word)==0)
        {
            return 1;
        }
    }
}
void replace(char str_dup[][15],char rep_word[],char new[],int nwords)
{
    int i;
    for(i=0;i<nwords;i++)
    {
        if(strcmp(str_dup[i],rep_word)==0)
        {
            strcpy(str_dup[i],new);
        }
    }
}
void display(char str_dup[][15],int nwords)
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
