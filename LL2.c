#include<stdio.h>
#include<stdlib.h>
int quicksort(int a[],int n);
int partition(int a[],int n);
int main()
{
    int n,a[10];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,n);
    printf("The sorted array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int quicksort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int x,y;
    int par=partition(a,n);
    int l[10],r[10];
    for(int i=0;i<par;i++)
    {
        l[i]=a[i];
        x=i;
    }
    quicksort(l,x);
    for(int i=n;i>par;i--)
    {
        r[i]=a[i];
        y=i;
    }
    quicksort(r,y);
}
int partition(int a[],int n)
{
    int pivot,i=1,j=n,temp,partition;
    a[0]=pivot;
    for(i=n;i<partition;i++)
    {
        if(a[j]>=pivot)
        {
            break;
        }
    }

    for(j=n;j>0;j--)
    {
        if(a[j]<=pivot)
        {
            break;
        }
    }
    if(i<=j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    else if(i>=j)
    {
        temp=pivot;
        pivot=a[j];
        a[j]=temp;
        partition=j;
        return partition;

    }
    else if(i=j)
    {
        partition=i;
        return partition;
    }
    
}