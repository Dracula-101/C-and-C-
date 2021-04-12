#include<stdio.h>
void info(int emp[][10], int r1);
void cal(int emp[][10], int res[][10], int r1, int year);
void output(int res[][10], int r1);
int main()
{
 int emp[10][10], res[10][10], r1, year;
 printf("Enter the current year : \n");
 scanf("%d", &year);
 printf("Enter number of rows for the matrix: ");
 scanf("%d", &r1);
 info(emp, r1);
 cal(emp, res, r1, year);
 output(res, r1);
 return 0;
}
void info(int emp[][10], int r1)
{
 int i, j, k, l;
 for(i=0; i<r1; i++)
 {
 for(j=0; j<2; j++)
 {
 printf("Enter the info of person %d : ", i+1);
 scanf("%d", &emp[i][j]);
 }
 }
 printf("Year ID \n");
 for(i=0; i<r1; i++)
 {
 for(j=0; j<2; j++)
 {
 printf("%d ", emp[i][j]);
 if(j==1)
 {
 printf("\n");
 }
 }
 }
}
void cal(int emp[][10], int res[][10], int r1, int year)
{
 int i, retire, x, y, j, data, swap, cal, ryear;
 for (i = 0; i < r1; i++)
 {
 for (j = 0; j < 5; j++)
 {
 res[i][j] = 0;
 }
 }
 for (x=0; x<r1; x++)
 {
 for(y=0; y<4; y++)
 {
 data = emp[x][0];
 cal = year - data;
 retire = 65 - cal;
 ryear = retire + year;
 if(cal<65)
 {
 res[x][0] = emp[x][0];
 res[x][1] = emp[x][1];
 emp[x][2] = cal;
 res[x][2] = emp[x][2];
 emp[x][3] = ryear;
 res[x][3] = emp[x][3];
 }
 }
 }
 for (i = 0; i < r1; i++)
 {
 for (j = i +1; j < r1; ++j)
 {
 if ((res[i][0] > res[j][0]) && res[i][0]!=0 && res[j][0]!=0)
 {
 swap = res[i][0];
 res[i][0] = res[j][0];
 res[j][0] = swap;
 swap = res[i][1];
 res[i][1] = res[j][1];
 res[j][1] = swap;
 swap = res[i][2];
 res[i][2] = res[j][2];
 res[j][2] = swap;
 swap = res[i][3];
 res[i][3] = res[j][3];
 res[j][3] = swap;
 }
 }
 }
}
void output(int res[][10], int r1)
{
 int i, j;
 printf("\nList of people retiring:\n");
 printf("Year\tID\tAge\tRetires in \n");
 for (int i = 0; i<r1; i++)
 {
 for (int j = 0; j < 5; j++)
 {
 if(res[i][j]!=0)
 {
 printf("%d \t", res[i][j]);
 if (j == 3)
 {
 printf("\n");
 }
 }
 }
 }
}