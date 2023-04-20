#include<stdio.h>

int main()
{
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count[t+1];
    for(i=0;i<=t;i++)
    {
        count[i]=0;
    }
    for(i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(i=1;i<=t;i++)
    {
        printf("%d\n",count[i]);
    }



    return 0;
}