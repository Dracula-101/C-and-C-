#include<stdio.h>
void main()
{
  int up,low;
  int u1,u2,l1,l2;
  printf("Enter the range of the numbers seperated by a space :");
  scanf("%d %d",&low,&up);
  for(int i=low;i<=up;i++)
  {
     u1=i/10;
     l1=i%10;
     for(int j=i+1;j<=up;j++)
     {
        u2=j/10;
        l2=j%10;
      if(u1*l1!=u2*l2 && u1!=l1 &&u2!=l2)
      {
        int x1=i*j;
        int x2=((l1*10+u1)*(l2*10+u2));
        if(x1==x2)
        {
          printf("{ %d ,%d }\n",i,j)
          ;
        }
      }
     }
  }
}