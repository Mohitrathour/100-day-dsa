#include<stdio.h>
int main()
{
    int n,m,i,j,temp;
    int arry[100][100],transpose[100][100];
    printf("enter the rows");
    scanf("%d",&n);
    printf("enter the column");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            transpose[j][i]=arry[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m/2;j++)
        {
            temp=transpose[i][j];
            transpose[i][j]=transpose[i][n-1-j];
            transpose[i][n-1-j]=temp;
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)    
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }    
    return 0;
}
