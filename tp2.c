#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
int main()
{
    printf("Redirecting you to");
    for(int i=0;i<5;i++)
    {
        sleep(1);
        printf(". ");
    }
    system("START https://www.google.com/");
}