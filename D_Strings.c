#include<stdio.h>
#include<string.h>

int main()
{
    char s[11],t[11];
    scanf("%s %s",s,t);
    int l1=strlen(s),l2=strlen(t);
    
    printf("%d %d\n",l1,l2);
    
    printf("%s%s\n",s,t);
    if(1)
    {
        char temp=s[0];
        s[0]=t[0];
        t[0]=temp; 
        printf("%s %s\n",s,t);

    }
    

    return 0;
}