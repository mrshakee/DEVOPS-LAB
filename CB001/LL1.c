#include <stdio.h>
#define max (10)
int n,a[10];
void create()
{
    printf("Enter the array size ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 }
 void display()
{
    printf("The array elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insert()
{
int index,val;
printf("Enter the index to insert at ");
scanf("%d",&index);
if(index>max)
{
    printf("Invalid input");
}
printf("Enter the value to be inserted ");
scanf("%d",&val);
for(int i=n-1;i>=index;i--)
{
    a[i+1]=a[i];
}
a[index]=val;
n=n+1;
}
void delete()
{
    int in;
    printf("Enter the index to delete");
    scanf("%d",&in);
    for(int i=in;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
}

int main()
{
    char c;
    while(1)
    {
    printf("Enter 1,2,3,4 or 5\n");
    printf("1.Create an array\n2.Display an array\n3.Insert an element into an array\n4.Delete an element from the array\n5.Exit\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
        if(c==1)
        create(n);
        break;
        }
        case 2:
        if(c==2)
        {
        display();
        break;
        }
        case 3:
        if(c==3)
        {
            insert();
            break;
        }
        case 4:
        if(c==4)
        {
            delete();
            break;
        }
        case 5:
        {
        if(c==5)
        return 0;
        break;
        }
        default:
        printf("Invalid input");
    }
}
}