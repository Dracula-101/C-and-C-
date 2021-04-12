#include <stdio.h>

void main()
{
    char choice;
    int n1,n2;
    printf("Enter the numbers:");
    scanf("%d,%d",&n1,&n2);
	flushal();
    printf("\nEnter the name of the operation to be performed :");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'a':printf(" The addition is %d:",n1+n2);
        break;
        
        case 'b':printf("The subraction is %d",n1-n2);
        break;
        
        case 'c':printf("The multiplication is %d",n1*n2);
        break;
        
        case 'd':printf("The division is %d",n1/n2);
        break;
        
        case 'e':printf("The Modulus is %d",n1%n2);
        break;
        
        default:printf("Invalid choice.");
    }
}