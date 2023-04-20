
#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000001],ch;
    scanf("%s",s);
    int c,i,j,l=strlen(s);
    for(i=0;s[i] != '\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            
            if(s[i]>s[j])
            {
                ch=s[i];
                s[i]=s[j];
                s[j]=ch;

            }
        }
        printf("%c",ch);
    }
    
    
    //for(i=0;ch[i]!='\0';i++)
    //{
        //c=1;
        //for(j=i+1;ch[j]!=0;j++)
        //{
           // if(ch[i]==ch[j])
           // {
                //c++;
                //ch[j]='`';
            //}
            
        //}
        //if(ch[i] != '`')
        //{
           //printf("%c : %d\n",ch[i],c); 
        //}
    
    
        
    //}
    
    
    return 0;
}
