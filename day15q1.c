#include<stdio.h>
int main()
{
   int n,m;
   scanf("%d",&n);
   scanf("%d",&m);
   if(n!=m)
   {
    printf("the matrix should be of same size");
    return 0;
   }
   int array[n][m];
   int i,j,sum=0;
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
        scanf("%d",&array[i][j]);
     }
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
        if(i==j)
        {
            sum=sum+array[i][j];
        }
     }
   }
   printf("sum of digonal elements is:%d",sum);
   return 0;
}
