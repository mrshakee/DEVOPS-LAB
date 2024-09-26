#include<stdio.h>

int main()
{
  int a,t;
  printf("Enter amount to calculate tax\n");
  scanf("%d",&t);
  if(t<=250000)
  {
    printf("No tax");

  }
if(t>=250000 && t<=500000)
{
    a=(0.05*t);
    printf("Total tax(5 percent) is %d",a);
}
else if(t>500000 && t<=1000000)
{
    a=(0.2*t+t);
    printf("Total tax(20 percent) is %d",a);

}
else if(t>1000000)
{
    a=(0.3*t+t);
    printf("Total tax(20 percent) is %d",a);

}

}