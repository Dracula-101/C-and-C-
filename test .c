#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
int main()
{
    printf("Redirecting you to");
    for(int i=0;i<3;i++)
    {
        sleep(1);
        printf(". ");
    }
    system("START https://www.youtube.com/watch?v=oHg5SJYRHA0&ab_channel=cotter548");
}