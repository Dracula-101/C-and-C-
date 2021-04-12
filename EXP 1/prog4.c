#include<stdio.h>
#include<conio.h>
void main()
{
 
 int ndays;
 int years ,months , days;
 printf(" Enter the number of days:");
 scanf("%d",&ndays);
 years=ndays/365;
 months=(ndays-years*365)/30;
 days=(ndays-years*365-months*30);
 printf("The total number of year/s are %d, month/s %d, day/s %d ", years,
 months,days );
 getch();
}
