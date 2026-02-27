#include<stdio.h>
int main()
{
    int n,m,i,j;
    int mat1[100][100];
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    int temp=1;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(mat1[i][j]==mat1[i+1][j+1])
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
        printf("its a toeplitz matrix");
    }
    else
    {
        printf("its not a toeplitz matrix");
    }
}