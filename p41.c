/*
WAP to convert the given String into Upper Case String
 A - Z==> 65 - 90
 a - z==> 97 - 122
difference =32
*/
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    char ArrayS[size];
    scanf("%s",ArrayS);
    for(int i=0;ArrayS[i]!=0;i++)
    {
        if(ArrayS[i]>=97 && ArrayS[i]<=122)
        {
            ArrayS[i]=ArrayS[i]-32;
        }
    }
    printf("%s",ArrayS);

}
