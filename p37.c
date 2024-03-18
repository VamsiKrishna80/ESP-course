//WAP to declare String and given input and display the output
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    char ArrayS[size];
    for(int i=0;i<=size;i++)
    {
        scanf("%c",&ArrayS[i]);
    }
    printf("%s",ArrayS);
    return  0;
}
