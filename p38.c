//WAP to find the length of the string
#include<stdio.h>
int main()
{
    int count=0;
    char ArrayS[]="vamsi krishna";
    for(int i=0;ArrayS[i]!=0;i++)
    {
        count++;
    }
    printf("count %d",count);
    return 0;
}
