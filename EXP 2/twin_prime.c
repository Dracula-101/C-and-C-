#include<stdio.h>
int prime(int n);

int main(void)
{   

    int start, end;

    printf("Enter start: \n");
    scanf("%d", &start);

    printf("Enter end: \n");
    scanf("%d", &end);

    for(int i = start; i < end; i++)
    {
        if(prime(i) && prime(i + 2))
        {            
            printf("{%d, %d}\n", i, i + 2);
            i = i + 1; 
        }                
    }    

    return 0; 
}

int prime(int n)
{
    if(n == 1)
    {
        return 0;
    }

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}