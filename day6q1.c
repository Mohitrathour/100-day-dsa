#include<stdio.h>
int main()
{
    int n,i;
    int arry[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    int slow=0;
    int fast;
    for(fast=1;fast<n;fast++)
    {
        if(arry[fast]!=arry[slow])
        {
            slow++;
            arry[slow]=arry[fast];
        }
    }
    for(i=0;i<=slow;i++)
    {
        printf("%d",arry[i]);
        if(i<slow)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}