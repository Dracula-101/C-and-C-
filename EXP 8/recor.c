#include<stdio.h>
#include<conio.h>
#include<string.h>
struct club
{
    char name[20];
    int age;
    char address[50];
    char status[10];
    char wife_name[20];
    int children;
    char child_name[][20];
};
void get_marriage_info(struct club person[],int n);
void get_info(struct club person[],int n)
{
    int i,marr_status;
    for(i=0;i<n;i++)
    {
	    fflush(stdin);
        printf("Enter the name of Member%d:",i+1);
        gets(person[i].name);
	    printf("Enter the Age of the Member%d:",i+1);
	    scanf("%d",&person[i].age);
	    printf("Enter the Address of the Member%d:",i+1);
        fflush(stdin);
	    gets(person[i].address);
	    printf("Enter 'active' if the player is active or 'inactive' if the player is inactive:");
        scanf("%s",person[i].status);
        printf("If the person is marraried press '1' else press '2':");
        scanf("%d",&marr_status);
        if(marr_status==1)
        {
            get_marriage_info(person,i);
        }
    }
}
void get_marriage_info(struct club person[],int i)
{
    int nchildren,j;
    fflush(stdin);
    printf("Enter the wife's name:");
    gets(person[i].wife_name);
    fflush(stdin);
    printf("Enter the number of children:");
    scanf("%d",&person[i].children);
    nchildren=person[i].children;
    for(j=0;i<nchildren;i++)
    {
        fflush(stdin);
	    printf("Enter the name of child%d:",i+1);
	    scanf("%[^\n]%*c",&person[i].child_name[i]);
    }
}
void display_mem(struct club person[],int n)
{
    int i,j;
    printf("-------------- Member of Men Sports Club-------------- \n");
    for(i=0;i<n;i++)
    {
	    if(strcmp(person[i].status,"active")==0)
        {
            printf("Name of Member%d:",i+1);
	        printf("%s\n",person[i].name);
	        printf("Name of Member's Wife name%d:",i+1);
	        printf("%s",person[i].wife_name);
        }
        else 
        printf("No active players found");
    }
}
void main()
{
    struct club person[100];
    int i,mem;
    printf("Enter the number of members in the club:");
    scanf("%d",&mem);
    get_info(person,mem);
    display_mem(person,mem);
}


