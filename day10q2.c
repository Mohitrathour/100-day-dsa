#include<stdio.h>
int main()
{
    int n,m,i,j,k=0;
    int arry[100],arry2[100],intersection[100];
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&arry2[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arry[i]==arry2[j])
            {
                intersection[k]=arry[i];
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",intersection[i]);
    }
    return 0;
}