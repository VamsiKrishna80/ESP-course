// WAP to copy string from one String to Another
#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    char ArrayS[size];
     char ArrayS1[size];
    scanf("%s",ArrayS);
    for(int i=0;ArrayS[i]!=0;i++)
    {
        ArrayS1[i]=ArrayS[i];
    }
    printf("1 %s\n",ArrayS);
    printf("2 %s",ArrayS1);
}
