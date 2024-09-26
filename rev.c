#include<stdio.h>
#include<string.h>
char str[10],ans[10];
int x=0;
void rev()
{
    int n=strlen(str);
    for(int i=n;i>0;i--)
    {
        ans[x]=str[i];
        x++;
    }
}
int main()
{
    printf("Enter the string: ");
    gets(str);
    rev();

    printf("Resultant string=");
    puts(ans);
}