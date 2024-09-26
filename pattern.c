#include<stdio.h>
#include<string.h>
int main()
{
char str[100],pat[50],rep[50],ans[100];
int i,j,c,m,k,flag=0;

printf("enter the main string:");
gets(str);

printf("enter the pattern string:");
gets(pat);

printf("enter the replacement string:");
gets(rep);
}
 void stringmatch();
 
 while(str[c]!='\0')
{
 if(str[c]==pat[i])
 {
c++;
i++;
 

if(pat[i]=='\0')
{
    flag=1;
    for(k=0;rep[k]!='\0';k++)
    ans[j]=rep[k];
    j++;
    i=0;

}
else
{
    ans[j]=str[c];
    j++;
    c++;
}
if(flag==1);

    printf("the final result is:%s",ans);
    puts(ans);

else 

printf("pattern not is not found");
puts(ans);
 
 }

}    