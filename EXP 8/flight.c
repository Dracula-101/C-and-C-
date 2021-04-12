#include<stdio.h>
#include<string.h>
struct flight_info
{
    char start_pt[4],des_pt[4];
    char start_time[12],arr_time[12];
    int no_seats;
}list[20];
int flight_checker(struct flight_info list[],char start[], char end[],int nflight)
{
    int i,flag;
    for(i=0;i<nflight;i++)
    {
        if(strcmp(list[i].start_pt,start)==0)
        {
            flag=i;
            break;
        }
        else
        return -1;
    }
    return flag;
}
void flight_details(struct flight_info list[] ,int num_flight)
{   
    int i;
    for(i=0;i<num_flight;i++)
    {
        printf("----------------------Entering the details for Flight no.%d----------------------",i+1);
        printf("\nEnter the STARTING POINT of the flight:");
        scanf("%s",list[i].start_pt);
        printf("Enter the DESTINATION POINT of the flight:");
        scanf("%s",list[i].des_pt);
        fflush(stdin);
        printf("Enter the STARTING TIME of the flight =");
        gets(list[i].start_time);
        fflush(stdin);
        printf("Enter the ARRIVAL TIME of the flight =");
        gets(list[i].arr_time);
        printf("Enter the number of the seats available in the flight:");
        scanf("%d",&list[i].no_seats);

    }
    printf("Details Saved....");
}
void Customer_input(struct flight_info list[],int num_flight)
{
    char strt_pt[4],des_pt[4],last_check[4];
    int seats;
    printf("\n----------------------BOOKING MODE----------------------");
    printf("\nEnter the STARTING POINT of the flight:");
    scanf("%s",strt_pt);
    printf("Enter the DESTINATION POINT of the flight:");
    scanf("%s",des_pt);
    int check_pt=flight_checker(list,strt_pt,des_pt,num_flight);
    if(check_pt>=0)
    {
        printf("Flights found....");
        printf("\nThe Timings for the flights is:\n(Starting Time: %s Arrival Time: %s)",list[check_pt].start_time,list[check_pt].arr_time);
        if(list[check_pt].no_seats>0)
        {
            printf("\nThe seats available for this flight is:%d",list[check_pt].no_seats);
            printf("\nEnter the number of seats to be reserved:");
            scanf("%d",&seats);
            list[check_pt].no_seats-=seats;
            printf("\n********Flight from %s to %s with %d seats is booked********",list[check_pt].start_pt,list[check_pt].des_pt,seats);
        }
        else 
        {
            printf("\nNo seats available.... Please try again later.");
        }
        printf("\nDo you want to make a another reservation press yes or no:");
        scanf("%s",last_check);
        if(strcmp(last_check,"yes")==0)
        Customer_input(list,num_flight);
        else  
        printf("\nTravel safe and hope that you have a great journey");
    }
    else
    printf("No Flights found.");
    
}
void main()
{
    int num_flight;
    printf("-------------WELCOME TO PANIC AIRLINES------------- ");
    printf("\nEnter the number of flights to be recorded:");
    scanf("%d",&num_flight);
    flight_details(list,num_flight);
    Customer_input(list,num_flight);  
}