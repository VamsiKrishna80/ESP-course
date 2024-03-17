//WAP to calculate the simple interest of a given amount I=p*t*r/100
#include<stdio.h>
void main()
{
    float p,t,r,I;// declaration of variables
    printf("Enter principle amount , Time in months , Rate:");
    scanf("%f%f%f",&p,&t,&r);// Taking user input values
    I=(p*t*r)/100;//simple interest formula
    printf("Interest is %f",I);//Display the interest
}

