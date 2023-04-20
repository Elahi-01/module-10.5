#include<stdio.h>
#include<string.h>

int main()
{
    char s[1001],s1[1001];
    scanf("%s",s);
    int l=0,i=0,j;
    while (s[i] != '\0')
    {
        i++;
        l++;
    }
    for(j=0,i=l-1;i>=0;i--,j++)
    {
        s1[j]=s[i];
        
    }
    s1[j] ='\0';
    if(strcmp(s1,s)==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    
    return 0;
}