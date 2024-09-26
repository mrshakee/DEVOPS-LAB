#include<stdio.h>
#include<string.h>
int c=0,m=0,i=0,j=0,k,flag=0;
char str[10],ans[10],pat[5],rep[5];
void patternmatch()
{
   while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;
            m++;
            if(pat[i]=='\0')
            {
                flag=1;
                for(int x=0;rep[x]!='\0';x++,j++)
                {
                    ans[j]=rep[x];
                }
            i=0;
            c=m;
            }
        }
        else
        {
            ans[j]=str[c];
            j++;
            c++;
            m=c;
            i=0;
        }
    }
    ans[j]='\0';
}
int main()
{
    printf("Enter the string: ");
    gets(str);
    printf("Enter the pattern: ");
    gets(pat);
    printf("Enter the replacement: ");
    gets(rep);

    patternmatch();

    if(flag==1)
    {
    printf("Pattern matched\n");
    printf("Resultant string=");
    puts(ans);
    }
    else
    printf("Pattern is not found");
    return 0;
}