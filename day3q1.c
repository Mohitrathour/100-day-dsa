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
    int key,r=0,index=0;
    printf("enter the key to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        r++;
        if(key==arry[i])
        {
            index=i;
            break;
        }
    }
    printf("found at index:%d",index);
    printf("comparisions:%d",r);
    return 0;
}