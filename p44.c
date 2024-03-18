//compare two Strings
#include<stdio.h>
int main()
{
    int count=0;
    int size1;
    size1=5;
    char ArrayS2[size1];
    scanf("%s",ArrayS2);
    char ArrayS1[5]="vamsi";

    for(int i=0;ArrayS1[i]!=0;i++)
    {
        if(ArrayS1[i]!=ArrayS2[i])
        {

            break;
        }
        else
            count++;
    }
    if(count==size1)
    {
       printf("SAME\n");
    }
    else
        printf("NOT SAME\n");

}
