#include<stdio.h>
void main()
{
  char ch='c';
  switch(ch)
  {
    case 'a'...'z':printf("lower case");break;
    case 'A'...'Z':printf("upper case");break;	
  }
}