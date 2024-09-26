#include <stdio.h>
int create(int n,int a[10]);
int display(int n,int a[10]);
int insert(int n,int a[10]);
int delete(int n,int a[10]);

int main()
{
    int a[10],n,c;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter 1,2,3,4 or 5\n");
    printf("1.Create an array\n2.Display an array\n3.Insert an element into an array\n4.Delete an element from the array\n5.Exit");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        create(n,a);
        break;
        case 2:
        display(n,a);
        break;
        case 3:
        insert(n,a);
        break;
        case 4:
        delete(n,a);
        break;
        case 5:
        return 0;
        break;
        default:
        printf("Invalid input");
    }
}
int create(int n,int a[10])
{
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}