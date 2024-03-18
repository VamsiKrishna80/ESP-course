//Question: Get a number string up to 50 digits and convert it to integer array.

#include<stdio.h>
int main()
{
    char String[50];
    scanf("%s",String);
    int Array[50],j;
    printf("Integer values:\n");
    for(int i=0;String[i]!=0;i++)
    {
        Array[i]=String[i]-48;
        printf("%d",Array[i]);
    }
}
