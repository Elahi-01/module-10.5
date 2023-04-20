#include<stdio.h>
#include<limits.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int min=INT_MAX;
    int max=INT_MIN;
    int temp;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maxindex,minindex;
    for(i=0;i<n;i++){
        if(a[i]>max)
        {
            max=a[i];
            maxindex=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            minindex=i;
        }

        
    }
    for(i=0;i<n;i++)
    {
        a[minindex]=max;
        a[maxindex]=min;
        printf("%d ",a[i]);
    }


        
    return 0;
}