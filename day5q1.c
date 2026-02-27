#include<stdio.h>
int main()
{
    int n,m,i,j,l;
    int arry[100],arry2[100],arry3[200];
    int temp=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&arry2[i]);
    }
    for(i=0;i<n;i++)
    {
        arry3[i]=arry[i];
    }
    for(j=0;j<m;j++)
    {
        arry3[i]=arry2[j];
        i++;
    }
    l=m+n;
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(arry3[j]>arry3[j+1])
            {
                temp=arry3[j];
                arry3[j]=arry3[j+1];
                arry3[j+1]=temp;
            }
        }
    }
    printf("Sorted merged array: \n");
    for(i = 0; i < l; i++) {
        printf("%d,", arry3[i]);
    }
    return 0;
}