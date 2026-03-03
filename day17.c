#include<stdio.h>
int main()
{
    int n,i,largest,smallest;
    int arry[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    largest=arry[0];
    smallest=arry[0];
    int flag=1;
    for(i=0;i<n;i++)
    {
        if(largest<=arry[i])
        {
            largest=arry[i];
        }
        if(smallest>=arry[i])
        {
            smallest=arry[i];
        }
    }
    printf("largest no:%d",largest);
    printf("smallest no:%d",smallest);
    return 0;
}