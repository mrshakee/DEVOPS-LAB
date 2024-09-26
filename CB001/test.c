#include <stdio.h>
int n,a[20];
void create()
{
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
}
void display()
{
    printf("The array elements are");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
int main()
{
    int a[10],n,c;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter 1,2,3,4 or 5\n");
    printf("1.Create an array\n2.Display an array\n3.Insert an element into an array\n4.Delete an element from the array\n5.Exit\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 5:
        return 0;
        default: printf("Invalid input");
    }
    return 0;
}
