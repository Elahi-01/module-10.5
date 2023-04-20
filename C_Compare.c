#include<stdio.h>
#include<string.h>
int main()
{
    char s[21],t[21];
    int i;
    scanf("%s %s",s,t);
    int l1=strlen(s),l2=strlen(t);
    if(strcmp(s,t)==-1)
    {
        printf("%s",s);
    }
    else{
        printf("%s",t);
    }
    return 0;
}