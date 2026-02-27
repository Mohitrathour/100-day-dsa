#include<stdio.h>
int main()
{
    int n,i,m,temp;
    int arry[100];
    temp=0;
    scanf("%d",&n);
    m=n;
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arry[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=arry[i];
        arry[i]=arry[m];
        arry[m]=temp;
        m--;
    }
    for (i=0;i<n;i++)
    {
        printf("%d",arry[i]);
    }    
    return 0;
}