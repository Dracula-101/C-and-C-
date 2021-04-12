#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2;
 int sum, sub, mult,div,mod;
printf("Enter two Numbers seperated by a comma:");
scanf("%d,%d" ,&num1 , &num2);
sum=num1+num2;
sub=num1-num2;
mult=num1*num2;
div=num1/num2; // considering the two number to be integers
mod=num1%num2;
printf("The sum of the two number are %d \n" ,sum);
printf("The subtraction of the two numbers are %d \n" ,sub);
printf("The multiplication of the two numbers are %d \n", mult);
printf(" The division of the two numbers are %d \n" , div );
printf("The modulus of the two numbers are %d \n" , mod);
getch();
}