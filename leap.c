#include<stdio.h>
int main()
{
    int year;
    printf("enter a year to check whether it is a leap year or not");
    scanf("%d",&year);
    if(year%4==0)
    printf("it is a leap year");
    else
    printf("it is not a leap year");
    return 0;
    
}
