#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main (){
    int a[100],n,i,pivot,low,high;
    printf("Enter the number of elements: ");
    sacnf("%d",&n);
    printf("enter array elements \n");
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
    pivot =0;
    high=n-1;
    low=1;
    for(i=1;i<n;i++){

    }
    
}