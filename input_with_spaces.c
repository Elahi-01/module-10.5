#include<stdio.h>

int main()
{
    char s[20];
    fgets(s,20,stdin);
    //s[18]='\0';
    //gets(s);
    printf("%s",s);
    return 0;
}