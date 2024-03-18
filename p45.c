//polindrome or not
#include<stdio.h>
int main()
{
    char ArrayS1[5]="ISISI";
    int size=5,count=0;
    int A=(size-1)/2;
    for(int i=0;i<(5)/2;i++)
    {
        if(ArrayS1[i]!=ArrayS1[size-1])
        {
            printf("NOT POLINDROME");
            break;
        }
        else
            count++;

       size--;
    }
    if(count==A)
    {
       printf("Polindrome");
    }

}

