#include <stdio.h>
int main(){
    int temp,n,a[100],i;
    printf("ENTER VALUEE OF N");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                main:
                a[j]=temp;
                
            }
        }
    }
    printf("sorted array list is : \n");
    for ( i = 0; i < n; i++)
    {






        
       printf("%d \n",a[i]);/* code */
    }
    
    return 0;
}