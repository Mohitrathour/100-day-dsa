#include<stdio.h>
int main()
{
    int n,m,i,j;
    int mat1[100][100],transpose[100][100];
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            transpose[j][i]=mat1[i][j];
        }
    }
    int temp=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(transpose[i][j]==mat1[i][j])
            {
                temp=0;
            }
            else
            {
                temp=1;
            }
        }
    }
    if(temp==0)
    {
        printf("its a symmetric matrix");
    }
    else
    {
        printf("its not a symmetric matrix");
    }
}       